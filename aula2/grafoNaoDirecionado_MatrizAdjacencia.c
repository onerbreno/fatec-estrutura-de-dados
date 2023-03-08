#include<stdio.h>
#define x 5

void zera_matriz(int m[][x])
{
	int i, j;
	for (i = 0; i < x; i++)
		for(j = 0; j < x ; j++)	m[i][j] = 0;
}

void mostra_matriz(int m[][x])
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		printf("\n");
		for(j = 0; j < x; j++)	printf("%d\t",m[i][j]);
	}
}


main()
{
	int m[x][x], vetorGrau[x], va, vb, a = 1; char cont;
	zera_matriz(m);
	zera_vetor(vetorGrau);
	do
	{
		do
		{
			printf("\nAresta %d:",a);
			printf("\n\tVertice a = "); scanf("%d",&va);
			printf("\n\tVertice b = "); scanf("%d",&vb);
		} while (va < 0 || vb < 0 || va > x || vb > x);

		a++;
		m[va][vb]++; if (va!=vb) m[vb][va]++;
		printf("\nContinua? (s/n) = "); fflush(stdin); cont = getchar();

	} while(cont == 's' || cont == 'S');
	mostra_matriz(m); printf("\n"); printf("\n");
}
