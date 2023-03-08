// 3) Modifique o programa do exemplo da aula anterior para armazenar grafos direcionados

// resolvendo usando matriz triangular

#include<stdio.h>
#include<malloc.h>

void zera_matriz(int **m, int v)
{
	for(int i = 0; i<v; i++)
		for(int j = 0; j <= i; j++) m[i][j]=0;
}
void mostra_matriz(int **m, int v)
{
	for(int i = 0; i < v; i++)
	{
		printf("\n");
		for(int j = 0; j <= i; j++) printf("%d\t", m[i][j]);
	}
}
main()
{
	int **m, i, j, v, a = 1, va, vb; char cont;

	do
	{
		printf("\nQuantos vertices? = ");
		scanf("%d",  &v);
	} while(v <= 0);

	printf("\n");

	m = (int **) malloc (v * (sizeof(int *)));
	for (i = 0; i < v; i++) 
		m[i] = (int *) malloc ((i+1)*sizeof(int));

	zera_matriz(m, v); 
	do
	{
		do
		{
			printf("\nAresta %d", a);
			printf("\n\tVertice a = "); scanf("%d", &va);
			printf("\n\tVertice b = "); scanf("%d", &vb);
		} while (va < 0 || vb < 0 || va >= v || vb >= v);
		
		if (va > vb) m[va][vb]++;
		else m[vb][va]++;
		a++;
		printf("\nContinua? = "); fflush(stdin); cont = getchar();
	}while (cont == 's'||cont == 'S');
	mostra_matriz(m, v);
}
