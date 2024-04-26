#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 3000

// Protótipos
int buscaLinear(int *v, int n, int elem);
int buscaOrdenada(int *v, int n, int elem);
int buscaBinaria(int *v, int n, int elem);
void insertionSort(int *v, int n);

int main()
{
	srand(time(NULL));
	int v[size];
	int sequencial, ordenada, binaria;
	double totalSort, totalLinear, totalOrdenada, totalBinaria;
	int i;

	for (i = 0; i < size; i++)
	{
		v[i] = rand() % 5000;
	}

	// Inicia a medição do tempo para a ordenação
	clock_t inicio, fim;
	inicio = clock();

	// Ordena o array usando Insertion Sort
	insertionSort(v, size);

	// Termina a medição do tempo para a ordenação
	fim = clock();

	// Calcula o tempo total gasto na ordenação
	totalSort = (double)(fim - inicio) / CLOCKS_PER_SEC;

	printf("Array Ordenado:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\nTempo Ordenacao: %f\n", totalSort);

	// Realiza uma busca linear e mede o tempo que leva
	inicio = clock();
	sequencial = buscaLinear(v, size, 666);
	fim = clock();
	totalLinear = (double)(fim - inicio) / CLOCKS_PER_SEC;
	printf("\nBusca sequencial: %d", sequencial);
	printf("\nTempo da busca sequencial: %f\n", totalLinear);

	// Realiza uma busca ordenada e mede o tempo que leva
	inicio = clock();
	ordenada = buscaOrdenada(v, size, 666);
	fim = clock();
	totalOrdenada = (double)(fim - inicio) / CLOCKS_PER_SEC;
	printf("\nBusca ordenada: %d", ordenada);
	printf("\nTempo da busca ordenada: %f\n", totalOrdenada);

	// Realiza uma busca binária e mede o tempo que leva
	inicio = clock();
	binaria = buscaBinaria(v, size, 666);
	fim = clock();
	totalBinaria = (double)(fim - inicio) / CLOCKS_PER_SEC;
	printf("\nBusca Binaria: %d", binaria);
	printf("\nTempo da busca binaria: %f\n", totalBinaria);

	return 0;
}

void insertionSort(int *v, int n)
{
	int i, j, aux;
	
	for (i = 1; i < n; i++) // Percorre todos os elementos do array a partir do segundo
	{
		aux = v[i]; // Armazena o valor do elemento atual em 'aux'

		// Move os elementos do array[0..i-1], que são maiores que 'aux', para uma posição à frente de sua posição atual
		for (j = i; (j > 0) && (aux < v[j - 1]); j--)
		{
			v[j] = v[j - 1];
		}
		v[j] = aux; // Insere 'aux' na posição correta
	}
}

int buscaLinear(int *v, int n, int elem)
{
	int i;

	for (i = 0; i < n; i++) // Percorre todos os elementos do array
	{
		if (elem == v[i]) // Se o elemento atual é igual ao elemento buscado
			return i;	  // Retorna o índice do elemento
	}
	return -1; // Se o elemento não foi encontrado retorna -1
}

int buscaOrdenada(int *v, int n, int elem)
{
	int i;

	for (i = 0; i < n; i++) // Percorre todos os elementos do array
	{
		if (elem == v[i]) // Se o elemento atual é igual ao elemento buscado
		{
			return i; // Retorna o índice do elemento
		}
		else
		{
			if (elem < v[i]) // Se o elemento buscado é menor que o elemento atual
			{
				return -1; // Interrompe a busca e retorna -1
			}
		}
	}
	return -1; // Se o elemento não foi encontrado, retorna -1
}

int buscaBinaria(int *v, int n, int elem)
{
	int inicio, meio, final;

	inicio = 0;	   // Define o início do intervalo de busca
	final = n - 1; // Define o final do intervalo de busca

	while (inicio <= final) // Enquanto o intervalo de busca não estiver vazio
	{
		meio = (inicio + final) / 2; // Calcula o índice do meio do intervalo de busca
		if (elem < v[meio])			 // Se o elemento buscado é menor que o elemento do meio
		{
			final = meio - 1; // Atualiza o final do intervalo de busca
		}
		else if (elem > v[meio]) // Se o elemento buscado é maior que o elemento do meio
		{
			inicio = meio + 1; // Atualiza o início do intervalo de busca
		}
		else
		{
			return meio; // Se o elemento do meio é igual ao elemento buscado, retorna o índice do meio
		}
	}
	return -1; // Se o elemento não foi encontrado, retorna -1
}