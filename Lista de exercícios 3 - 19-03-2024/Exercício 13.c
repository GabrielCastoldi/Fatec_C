/*
13. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <stdio.h>

struct horario
{
    int hora;
    int minutos;
    int segundos;
};

typedef struct horario Horario;

struct data
{
    int dia;
    int mes;
    int ano;
};

typedef struct data Data;

struct compromisso
{
    Data data;
    Horario horario;
    char descricao[100];
};

typedef struct compromisso Compromisso;

int main()
{
    Compromisso compromisso;

    printf("\nDia do compromisso: ");
    scanf("%d", &compromisso.data.dia);

    printf("\nMes do compromisso: ");
    scanf("%d", &compromisso.data.mes);

    printf("\nAno do compromisso: ");
    scanf("%d", &compromisso.data.ano);

    printf("\nHora do compromisso: ");
    scanf("%d", &compromisso.horario.hora);

    printf("\nMinutos: ");
    scanf("%d", &compromisso.horario.minutos);

    printf("\nSegundos: ");
    scanf("%d", &compromisso.horario.segundos);

    printf("\nCompromisso: ");
    scanf("%s", compromisso.descricao);

    printf("\nCompromisso: %s", compromisso.descricao);
    printf("\nData: %d/%d/%d", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("\nHorario: %d:%d:%d", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;
}