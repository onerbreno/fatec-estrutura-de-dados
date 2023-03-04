
// Busca sequencial

// -> Em estrutura grandes, o número de comparações pode ser 
// proibitivo (olha-se "um por um"),


// Busca binária

// -> Procurar uma chave, número ou dado em uma estrutura linear (vetor);
// -> O vetor é sucessivamente dividido por 2 até que se encontre a 
// chave (ou se determine que ela não existe);

// 1. Cadastrar o vetor ordenado
// 2. Ordenar o vetor
// 3. Aplicar a busca: 
// 	a) Inicializar LS(limite superior) com tamanho de vetor -1
// 	b) Inicializa LI(limite inferior) com 0 
// 	c) Calcular M =(LS+LI)/2
// 	d) Se V[M] = chave, encontrou(pare)
// 	   Senão Se chave > V[M] LI = M + 1
// 		     Senão LS = M - 1
// 	e) Voltar no passo c enquanto LI < LS
			

// Algoritimo de ordenação 

// -> Proposta "Simples" -> bubble sort

// ---------------------------------------------
// busca binária utilizando ordenação bubble sort
#include <stdio.h>
#include <ctype.h>
main()
{
	int n, i, j, inicio, fim, x, aux;
	char cont;

	do {
		printf("\nQuantos numeros? = ");
		scanf("%d", &n);
	} while (n <= 0);
	int a[n];

	for (i = 0; i < n; i++) {
		printf("\nElemento %d = ", i + 1);
		scanf("%d", &a[i]);
	}

	// início do bubble sort
	for (i = n - 1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				aux = a[j];
				a[j] = a[j + 1];
				a[j + 1] = aux;
			}
		}
	}
	// fim do bubble sort

	do {
		printf("\nLista ordenada:\n");
		for (i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}

		printf("\n\nNumero = ");
		scanf("%d", &x);

		fim = n - 1;
		inicio = j = 0;

		do {
			j = (inicio + fim) / 2;
			if (x == a[j])
				break; // interrompe se encontrou x no vetor
			else if (x > a[j])
				inicio = j + 1;
			else
				fim = j - 1;
		} while (fim >= inicio);

		printf("\ninicio = %d	fim = %d", inicio, fim);
		
		if (fim >= inicio)
			printf("\nAchei, posicao %d...\n\n", j + 1);
		else
			printf("\nNao achei...\n\n");
		printf("Continua? = ");
		fflush(stdin);
		cont = getchar();
	} while (toupper(cont) == 'S');
}
