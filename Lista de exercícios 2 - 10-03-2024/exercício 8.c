/*
8. Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de
venda de 30 produtos. A listagem pode ser de todos os produtos ou somente de um ao se
digitar o código.
*/

#include <stdio.h>

struct Produtos
{
    int codigo;
    int quantidade;
    float valorCompra;
    float valorVenda;
};

typedef struct Produtos Produtos;

int main()
{
    Produtos produtos[3];
    int buscar = 0;
    int codigoEncontrado = -1;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("\nDigite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);

        printf("\nDigite o valor de compra do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valorCompra);

        printf("\nDigite o valor de venda do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valorVenda);
    }

    printf("\nLista de produtos\n");
    printf("\n%-20s %-20s %-20s %-20s", "Codigo", "Quantidade", "Valor Compra", "Valor Venda");

    for (i = 0; i < 3; i++)
    {
        printf("\n%-20d %-20d %-20.2f %-20.2f", produtos[i].codigo, produtos[i].quantidade, produtos[i].valorCompra, produtos[i].valorVenda);
    }

    printf("\nDigite o codigo do produto desejado: ");
    scanf("%d", &buscar);

    for (i = 0; i < 3; i++)
    {
        if (buscar == produtos[i].codigo)
        {
            codigoEncontrado = i;
        }
    }

    if (codigoEncontrado == -1)
    {
        printf("Produto nao encontrado\n");
    }
    else
    {
        printf("\n%-20s %-20s %-20s %-20s", "Codigo", "Quantidade", "Valor Compra", "Valor Venda");
        printf("\n%-20d %-20d %-20.2f %-20.2f", produtos[codigoEncontrado].codigo, produtos[codigoEncontrado].quantidade, produtos[codigoEncontrado].valorCompra, produtos[codigoEncontrado].valorVenda);
    }

    return 0;
}