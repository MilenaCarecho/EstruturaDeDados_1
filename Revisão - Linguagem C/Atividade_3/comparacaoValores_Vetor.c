/*
Exiba os valores em comum de dois vetores
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_1[5], vetor_2[5];
    int i = 0;
    int j = 0;
    for (i = 0; i < 5;i++)
    {
        printf("Informe o valor do elemento %d do vetor 1: \n", i + 1);
        scanf("%d", &vetor_1[i]);
    }

    for (j = 0; j < 5; j++)
    {
        printf("Informe o valor do elemento %d do vetor 2: \n", j + 1);
        scanf("%d", &vetor_2);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++){
            if(vetor_1[i] == vetor_2[j])
            {
                printf("Valores iguais na posicao: %d e %d\n", i + 1, j + 1);
            }
        }
    }
}
