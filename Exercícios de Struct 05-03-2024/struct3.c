/*
Crie um struct que represente um pedido, o qual tem as informalçoes: codigo, total do pedido.

Cada pedido é composto por uma lista de produto, onde tem-se as informações:
codigo, quantidade, valor unitario e total do item.

Crie um programa que gere dados aleatorios de ao menos 10 pedidos e seus itens.
cada pedido devera ter 3 itens (produtos)

Calcule:

a. valor total dos pedidos;
b. valor medio dos pedidos;
c. quantidade de itens vendido
d. pedido com maior valor de venda;
e. calcular o total de cada pedido;
*/

#include <stdio.h>
#include <time.h>

struct produto
{
    int codigo;
    int quantidade;
    float valorUnitario;
    float total;

};

typedef struct produto Produto;

struct pedido
{
    int codigo;
    float total;
    Produto listaProduto[3];
};

typedef struct pedido Pedido;

int main()
{
    srand(time(NULL));
    Pedido listaPedido[10];
    int contador;
    int i;

    for ( i = 0; i < 3; i++)
    {
        listaPedido[i].listaProduto[i].codigo = rand() % 100;
        listaPedido[i].listaProduto[i].quantidade = rand() % 10;
        listaPedido[i].listaProduto[i].valorUnitario = rand() % 20;
    }

    for ( i = 0; i < 10; i++)
    {
        listaPedido[i].codigo = rand() % 10;
        listaPedido[i].total = listaPedido[i].listaProduto[i].quantidade * listaPedido[i].listaProduto[i].valorUnitario;
        contador++;
    }

    printf("Valor total dos pedidos: ");
    return 0;
}