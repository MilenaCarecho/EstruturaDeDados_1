#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20];
    char letra;
    int x, cont1 = 0, cont2 = 0;

    printf("Insira a string 1: ");
    gets(string1);
    printf("Insira a string 2: ");
    gets(string2);
    printf("Insira o caracter ou palavra a ser procurado: ");
    scanf("%c", &letra);

    for(x = 0; x < strlen(string1); x++)
    {
        if(string1[x] == letra)
        {
            cont1++;
        }
    }
    for (x = 0; x < strlen(string2); x++)
    {
        if (string2[x] == letra)
        {
            cont2++;
        }
    }
    printf("A letra \"%c\" aparece %d vez(es) na string 1", letra, cont1);
    printf(" e %d vez(es) na string 2", cont2);
    printf("\n\n\n");
}
