/*
3. Um sistema de gerenciamento de pedidos recebe as seguintes informações do usuário
(considere 10 entradas): código do produto, valor unitário, quantidade vendida. Armazene
cada informação em um vetor próprio e:
a. exiba a listagem de produtos no seguinte formato:

CODIGO V. UNIT QTD TOTAL ITEM
1 100.00 2 200.00
…
299 200.00 2 400.00

b. calcule e exiba:
i. Quantidade total de itens vendidos;
ii. Valor total Vendido;
iii. Quantidade média de itens por venda;
iv. Valor unitário médio;
v. Média do valor total por item;
c. Solicite ao usuário informar um código para consulta de item vendido, se o código existir
exiba todas informações do referido código: código, valor unitário, quantidade, total item;
*/

#include <stdio.h>

struct pedido
{
    int codigo;
    float valorUnitario;
    int quantidadeVendida;
};

typedef struct pedido Pedido;

int main()
{
    Pedido pedidos[10];
    int totalItens = 0;
    float totalValor = 0.0;
    int codigo = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d codigo: ", i + 1);
        scanf("%d", &pedidos[i].codigo);
        printf("\nDigite o %d valor: ", i + 1);
        scanf("%f", &pedidos[i].valorUnitario);
        printf("\nDigite a %d quantidade: ", i + 1);
        scanf("%d", &pedidos[i].quantidadeVendida);

        totalItens += pedidos[i].quantidadeVendida;
        totalValor += pedidos[i].valorUnitario * pedidos[i].quantidadeVendida;
    }

    printf("\n%10s %10s %10s %10s\n", "CODIGO", "V. UNIT", "QTD", "TOTAL ITEM");

    for (i = 0; i < 10; i++)
    {
        printf("\n%10d %10.2f %10d %10.2f", pedidos[i].codigo, pedidos[i].valorUnitario, pedidos[i].quantidadeVendida, pedidos[i].valorUnitario * pedidos[i].quantidadeVendida);
    }

    printf("\nTotal de itens vendidos: %d", totalItens);
    printf("\nValor total vendido: %.2f", totalValor);
    printf("\nQuantidade media de itens por venda: %d", totalItens / 10);
    printf("\nValor unitario medio: %.2f", totalValor / totalItens);
    printf("\nMedia do valor total por item: %.2f", totalValor / 10);

    printf("\nDigite um codigo para consulta: ");
    scanf("%d", &codigo);

    for (i = 0; i < 10; i++)
    {
        if (pedidos[i].codigo == codigo)
        {
            printf("\nCodigo: %d. Valor unitario: %.2f. Quantidade: %d. Total item: %.2f.", pedidos[i].codigo, pedidos[i].valorUnitario, pedidos[i].quantidadeVendida, pedidos[i].quantidadeVendida * pedidos[i].valorUnitario);
        }
    }
    return 0;
}