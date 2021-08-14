/*
Escreva um programa em que o usuário insira um número
qualquer. Se o número digitado for um da tabela abaixo, o
programa deve retornar os caracteres indicados, senão, o
programa deve retornar o caractere 0 (zero). Utilize o comando
switch
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if (numero == 1)
        printf("A");
    else if (numero == 2)
        printf("B");
    else if (numero == 3)
        printf("C");
    else if (numero == 4)
        printf("D");
    else
        printf("Numero invalido");
}
