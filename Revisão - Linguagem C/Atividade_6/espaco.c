#include<stdio.h>
void rmv(char *str){
    int count=0,i;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            str[count++]=str[i];
        }
    }
    str[count]=0;
}

int main(){

    char str[]="Essa mensagem nao vai ter espaco mais";
    char letra = 32	;
    int x, cont1 = 0;

    for(x = 0; x < strlen(str); x++)
    {
        if(str[x] == letra)
        {
            cont1++;
        }
    }
    printf("espaco aparece %d vez(es) na string '%s'\n", cont1, str);

    rmv(str);
    puts(str);
    return 0;
}
