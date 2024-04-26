/*
5. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.
*/

#include <stdio.h>

struct pessoa
{
    char nome[100];
    int idade;
    char endereco[100];
};

typedef struct pessoa Pessoa;

int main() {
    Pessoa p;

    printf("\nDigite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &p.idade);
    getchar();  // Para consumir o '\n' deixado pelo scanf

    printf("\nDigite o endereco: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);

    printf("\nDados armazenados:\n");
    printf("\nNome: %s", p.nome);
    printf("\nIdade: %d\n", p.idade);
    printf("\nEndereco: %s", p.endereco);

    return 0;
}