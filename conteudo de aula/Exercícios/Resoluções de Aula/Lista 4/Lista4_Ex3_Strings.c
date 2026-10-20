#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int conta_caracteres(char str[]);
int conta_letras(char str[]);
void minuscula(char str[]);
void maiuscula(char str[]);
void primeira(char str[]);
void invertido(char str[]);

int main()
{
	char string[15], aux[15];
	
	fgets(string,15,stdin);
	//gets(string);
	puts(string);
	printf("\nQuantidade de caracteres:  %i", conta_caracteres(string));	
	printf("\nQuantidade de letras:  %i\n", conta_letras(string));
	
	strcpy(aux,string);
	minuscula(aux);
	printf("\nString em minusculo: %s",aux);
	
	strcpy(aux,string);
	maiuscula(aux);
	printf("\nString em maiusculo: %s",aux);
	
	strcpy(aux,string);
	primeira(aux);
	printf("\nPrimeira maiuscula: %s",aux);
	
	strcpy(aux,string);
	invertido(aux);
	printf("\nInvertido: %s",aux);
		
		
	return 0;	
}

int conta_caracteres(char str[]){
	int cont=0;
	while(str[cont]!='\0')
		cont++;
	return cont;
}

int conta_letras(char str[]){
	int i, cont=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			cont++;
		}
	}
	return cont;
}

void minuscula(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
		if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
}

void maiuscula(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
		if(str[i]>='a' && str[i]<='z')
			str[i]-=32;
}

void primeira(char str[])
{
	minuscula(str);
	str[0]=toupper(str[0]);	
}

void invertido(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i]-=32;
		else if (str[i]>='A' && str[i]<='Z')
		   str[i]+=32;
	}		
}

