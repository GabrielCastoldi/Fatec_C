/*
4. Crie uma matriz de tamanho 10 x 5 e:
a. crie uma função que receba a matriz por referência para preencher os valores;
b. crie uma função que receba a matriz por referência e mostre seus valores;
c. crie uma função que retorne a soma da matriz;
d. crie uma função que retorne o valor médio da matriz;
e. crie uma função que permita procurar um valor na matriz, logo, deverá receber por
referência a matriz, por valor a variável de procura e retornar o valor encontrado (caso não
encontre, retorne -1).
*/

#include <stdio.h>

#define linhas 10
#define colunas 5

// protótipos
void preencherValores(int matriz[linhas][colunas]);
void mostrarMatriz(int matriz[linhas][colunas]);
int somaMatriz(int matriz[linhas][colunas]);
double mediaMatriz(int matriz[linhas][colunas]);
int procurarValor(int matriz[linhas][colunas], int valor);

int main()
{
    int matriz[linhas][colunas];
    int valorProcurado;
    int valorEncontrado;

    preencherValores(matriz);

    printf("\nMatriz\n");
    mostrarMatriz(matriz);

    printf("\nA soma dos valores da matriz eh: %d", somaMatriz(matriz));

    printf("\nO valor medio da matriz eh: %.2f", mediaMatriz(matriz));

    printf("\nDigite um valor a ser encontrado na matriz: ");
    scanf("%d", &valorProcurado);

    valorEncontrado = procurarValor(matriz, valorProcurado);
    if (valorEncontrado == -1)
    {
        printf("\nValor %d nao encontrado na matriz", valorProcurado);
    }
    else
    {
        printf("Valor %d encontrado na matriz", valorEncontrado);
    }

    return 0;
}

void preencherValores(int matriz[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int matriz[linhas][colunas])
{
    int soma = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

double mediaMatriz(int matriz[linhas][colunas])
{
    return (double)somaMatriz(matriz) / (linhas * colunas);
}

int procurarValor(int matriz[linhas][colunas], int valor)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == valor)
            {
                return valor;
            }
        }
    }
    return -1;
}