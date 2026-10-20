#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto1[21], texto2[21], aux1[21], aux2[21];
    int i;
    
    printf("Digite o primeiro texto: "); 
    gets(texto1); 
    printf("Digite o segundo texto: "); 
    gets(texto2); 
    if(strcmp(texto1,texto2)==0) 
    { 
        printf("Strings sao identicas: case sensitive"); 
    }
    else
    {
        for(i=0;i<strlen(texto1);i++)
            aux1[i]=toupper(texto1[i]);
        aux1[i]='\0';
        
        for(i=0;i<strlen(texto2);i++)
            aux2[i]=toupper(texto2[i]);
        aux2[i]='\0';
        if(strcmp(aux1,aux2)==0) 
            printf("Strings sao identicas: case insensitive");
        else
            printf("Strings sao diferentes");
    }

    return 0;
}