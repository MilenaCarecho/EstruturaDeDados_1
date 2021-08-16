#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[20] = "Brasileiro";
    char string2[20] = "Brasil";
    char letra = 's';

    if (strchr(string1,"s"))
    {
        printf("O caracter \"%c\" esta na string \"%s\"", letra, string1);
    }
    if (strchr(string1, string2))
    {
        printf("A string \"%s\" esta na string \"%s\"", string2, string1");
    }
}
