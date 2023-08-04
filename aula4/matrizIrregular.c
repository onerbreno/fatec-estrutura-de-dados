// Criar uma aplicação para trabalhar com matrizes irregulares
// Usar alocação dinâmica de memória, conforme instruções contidas no arquivo anexo.
// resolvendo usando matriz triangular

// Construir uma aplicação para cadastrar o número de casas de um bairro em uma cidade, rua por rua.

// O bairro será representado por uma matriz irregular, onde cada linha representa uma rua distinta, e cada coluna em uma linha representa o número de moradores de cada casa da rua.

// Mostrar a matriz, o número total de moradores por rua e do bairro.

#include <stdio.h>
#include <malloc.h>

void zera_matriz(int **m, int v)
{
    for (int i = 0; i < v; i++)
        for (int j = 0; j <= i; j++)
            m[i][j] = 0;
}

// void mostra_matriz(int **m, int v)
// {
// 	for(int i = 0; i < v; i++)
// 	{
// 		printf("\n");
// 		for(int j = 0; j <= i; j++) printf("%d\t", m[i][j]);
// 	}
// }

main()
{
    int **m, i, j, ruas, casas, a = 1, moradores;
    char cont;

    do
    {
        printf("\nQuantidade de ruas? = ");
        scanf("%d", &ruas);
    } while (ruas <= 0);

    printf("\n");

    m = (int **)malloc(ruas * (sizeof(int *)));
    for (i = 0; i < ruas; i++)
    {
        printf("Rua: %d", i);

        do
        {
            printf("\nQuantidade de casas da rua %d = ", i);
            scanf("%d", &casas);
        } while (casas <= 0);

        m[i] = (int *)malloc(casas * sizeof(int));

        // do
        // {

        //     do
        //     {
        //         printf("\nNúmero de moradores da casa %d = ", );
        //         scanf("%d", &moradores);
        //     } while (moradores <= 0);

        //     m[i][i = moradores;

        //     printf("\nContinua? = ");
        //     fflush(stdin);
        //     cont = getchar();
        // } while (cont == 's' || cont == 'S');
    }

    zera_matriz(m, v);
    do
    {
        do
        {
            printf("\nAresta %d", a);
            printf("\n\tVertice a = ");
            scanf("%d", &va);
            printf("\n\tVertice b = ");
            scanf("%d", &vb);
        } while (va < 0 || vb < 0 || va >= v || vb >= v);

        if (va > vb)
            m[va][vb]++;
        else
            m[vb][va]++;
        a++;
        printf("\nContinua? = ");
        fflush(stdin);
        cont = getchar();
    } while (cont == 's' || cont == 'S');
    mostra_matriz(m, v);
}
