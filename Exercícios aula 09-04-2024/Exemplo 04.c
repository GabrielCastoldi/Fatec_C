/*
1. Crie o seguinte struct:
struct venda {
    int quantidade;
    float valorUnitario;
};

a. crie um array A com 10 posições para o struct venda;
b. crie uma função que preencha o array;
c. crie um segundo array B, de mesmo tamanho;
d. crie uma função que permita replicar os dados de A para B;
e. crie uma função que receba o array e um variavel float totalVenda, nesta variável, por referência
compute o valor total vendido;
f. crie uma função que receba o array e retorne a quantidade média
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

struct venda
{
    int quantidade;
    float valorUnitario;
};

typedef struct venda Venda;

// Prototipos
void preencherVendas(Venda *A, int n);
void replicarArray(Venda *vendaOrigem, Venda *vendaDestino, int n);
void mostrarVendas(Venda *A, int n);
float calcularTotalVendido(Venda *listaVenda, float *totalVenda, int n);
float calcularQuantidadeMedia(Venda *listaVenda, float *quantidadeMedia, int n);

int main()
{
    Venda listaVendas[size];
    Venda copiaListaVendas[size];
    float totalVenda;
    float quantidadeMedia;

    preencherVendas(listaVendas, size);
    replicarArray(listaVendas, copiaListaVendas, size);
    mostrarVendas(listaVendas, size);
    calcularTotalVendido(listaVendas, &totalVenda, size);
    printf("\nValor total vendido: %.2f\n", totalVenda);
    calcularQuantidadeMedia(listaVendas, &quantidadeMedia, size);
    printf("Quantidade media: %.2f\n", quantidadeMedia);

    return 0;
}

void preencherVendas(Venda *A, int n)
{
    srand(time(NULL));
    int i;

    for (i = 0; i < n; i++)
    {
        A[i].quantidade = 1 + rand() % 10;
        A[i].valorUnitario = 1.0 + (rand() / (float)RAND_MAX) * 99.0;
    }
}

void replicarArray(Venda *vendaOrigem, Venda *vendaDestino, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        vendaDestino[i].quantidade = vendaOrigem[i].quantidade;
        vendaDestino[i].valorUnitario = vendaOrigem[i].valorUnitario;
    }
}

void mostrarVendas(Venda *A, int n)
{
    int i;

    printf("\nVendas: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nQuantidade: %d - Valor: %.2f", A[i].quantidade, A[i].valorUnitario);
    }
}

float calcularTotalVendido(Venda *listaVenda, float *totalVenda, int n)
{
    int i;
    *totalVenda = 0.0;

    for (i = 0; i < n; i++)
    {
        *totalVenda += listaVenda[i].valorUnitario;
    }
    return *totalVenda;
}

float calcularQuantidadeMedia(Venda *listaVenda, float *quantidadeMedia, int n)
{
    int i;
    float quantidadeTotal = 0.0;
    *quantidadeMedia = 0.0;

    for (i = 0; i < n; i++)
    {
        quantidadeTotal += listaVenda[i].quantidade;
    }

    *quantidadeMedia = quantidadeTotal / n;

    return *quantidadeMedia;
}