/*
9. Pierre e Pietro são apostadores inveterados de jogos de apostas, com a expertise acumulada
de anos, criaram a P&P Investimentos, cujo objetivo é gerenciar suas apostas. Em sua
primeira versão do programa desejam administrar apostas simples da mega-sena, com
apenas 6 números em cada jogo. Considerando ímpar conhecimento em apostas, criaram o
seguinte método: a cada concurso da mega-se fazem 10 apostas de 6 números. Com o
intuito de gerenciar as apostas precisam de um programa que:

a. usuário informe o número do concurso;
b. os usuários deverão informar 6 números de azar e armazenados em um vetor próprio;
c. para cada concurso serão geradas 10 apostas de 6 números armazenados em uma matriz 10 x 6;
d. as apostas devem ser geradas com valores entre 1 e 60, não repetidos e NÃO CONSTANTES no vetor de azar.
e. os dados de cada concurso poderão ser armazenados numa estrutura (sugestão abaixo):

struct aposta {
int concurso;
int numerosAzar[6];
int apostas[10][6];
};

f. o programa deverá ter opção de mostrar os números das apostas geradas;
g. deverá mostrar o número que mais vezes foi apostado no concurso;
h. cada aposta poderá ser armazenada em um vetor;
i. utilize funções para a resolução.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numApostas 10
#define numNumeros 6
#define maxNumero 60

struct aposta
{
    int concurso;
    int numerosAzar[numNumeros];
    int apostas[numApostas][numNumeros];
};

typedef struct aposta Aposta;

//protótipos
int contem(int numero, int *vetor, int tamanho);
void gerarAposta(Aposta *aposta);
void imprimirAposta(Aposta *aposta);

int main()
{
    srand(time(NULL));
    Aposta aposta;

    printf("\nDigite o numero do concurso: ");
    scanf("%d", &aposta.concurso);

    printf("\nDigite os 6 numeros de azar: ");
    for (int i = 0; i < numNumeros; i++)
    {
        scanf("%d", &aposta.numerosAzar[i]);
    }

    gerarAposta(&aposta);
    imprimirAposta(&aposta);

    return 0;
}

int contem(int numero, int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == numero)
        {
            return 1;
        }
    }
    return 0;
}

void gerarAposta(Aposta *aposta)
{
    for (int i = 0; i < numApostas; i++)
    {
        for (int j = 0; j < numNumeros; j++)
        {
            int numero;
            do
            {
                numero = rand() % maxNumero + 1;
            } while (contem(numero, aposta->numerosAzar, numNumeros) || contem(numero, aposta->apostas[i], j));
            aposta->apostas[i][j] = numero;
        }
    }
}

void imprimirAposta(Aposta *aposta)
{
    printf("\nConcurso: %d\n", aposta->concurso);
    printf("\nNumeros de azar: ");
    for (int i = 0; i < numNumeros; i++)
    {
        printf("%d ", aposta->numerosAzar[i]);
    }
    printf("\nApostas:\n");
    for (int i = 0; i < numApostas; i++)
    {
        for (int j = 0; j < numNumeros; j++)
        {
            printf("%.2d ", aposta->apostas[i][j]);
        }
        printf("\n");
    }
}