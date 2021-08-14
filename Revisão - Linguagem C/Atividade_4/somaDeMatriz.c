/* some as colunas da matriz e imprima a mesma */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mtrx[5][5], v[10];
    int i = 0, j = 0, soma = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j ++)
        {
            printf("Digite os valores da matriz na posicao: %d e %d: ", i, j);
            scanf("%d", &mtrx[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j ++)
        {
            printf("%d ", mtrx[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal por linha: \n");
    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j ++)
        {
            soma = soma + mtrx[i][j];
        }
        printf("Linha %d : soma = %d\n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }

    soma = 0;
    printf("\nTotal por coluna: \n");
    for ( j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i ++)
        {
            soma = soma + mtrx[i][j];
        }
    }
    printf("Coluna %d : soma = %d\n", i + 1, soma);
    v[j + 5] = soma;
    soma = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nOs valores da soma da linha %d sao: %d\n", i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d sao: %d\n", i + 1, v[i + 5]);
    }
}
