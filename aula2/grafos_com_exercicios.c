// 1) Crie uma função para carregar um vetor com X posições, sendo X o número de vértices 
// de um grafo, com os graus do vertíces correspondentes

// 2) Com base no exercicio anterior, classifique o grafo como: euleriano, atravessável ou não euleriano

// 3) Modifique o programa do exemplo anterior para armazenar grafos direcionados

#include<stdio.h>
#define x 5

void zera_matriz(int m[][x])
{
	int i, j;
	for (i = 0; i < x; i++)
		for(j = 0; j < x; j++)	m[i][j] = 0;
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

void grau_dos_vertices(int m[][x], int g[])
{
	printf("\ngrau dos vertices: ");
	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			g[i] = g[i] + m[i][j];
			if (i == j) g[i] = g[i] + m[i][j];
		}
		printf("%d\t", g[i]);
	}		
}

int euleriano(int v[])
{
	int c = 0; // conta os vertices impares
	for (int i = 0; i < x; i++)
		if (v[i] % 2 != 0) c++;
	return c;
}
main()
{
	int m[x][x], va, vb, a = 1; char cont;
	zera_matriz(m);
	do
	{
		do
		{
			printf("\nAresta %d:",a);
			printf("\n\tVertice a = "); scanf("%d",&va);
			printf("\n\tVertice b = "); scanf("%d",&vb);
		} while (va < 0 || vb < 0 || va > x || vb > x);
		a++;
		m[va][vb]++; if (va != vb) m[vb][va]++;

		printf("\nContinua? (s/n) = "); fflush(stdin); cont = getchar();

	} while(cont == 's'|| cont == 'S');

	mostra_matriz(m); 

	int v[x]; 
	for(int i = 0; i < x; i++) v[i] = 0;

	grau_dos_vertices(m,v);
	printf("\ngrau dos vertices (de novo...): ");
	for(int i = 0; i < x; i++) printf("%d\t", v[i]);

	int c = euleriano(v);
	if (c == 0) printf("\n\nGrafo euleriano: 0 vertices impares\n");
		else if (c == 2) printf("\n\nGrafo atravessavel: 2 vertices impares\n");
			 else printf("\n\nGrafo nao euleriano: mais de 2 vertices impares\n");
	printf("\n"); 
}; 
