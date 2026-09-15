#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[100],*ps,letra;
	int i,pos[100],*ppos, cont=0, tam;
	
	ps=s;
    ppos=pos;
    
	printf("String:");
	gets(ps);
	
	printf("Procurar pela letra: ");
    scanf(" %c",&letra);
    fflush(stdin);
    
    //deixando a frase e letra em maiúsculas
    tam=strlen(ps);
	for(i=0;i<tam;i++,ps++)
	{
		if(*ps>='a' && *ps<='z')
		{
			*ps-=32;
		}    	   
	}
   
    if(letra>='a' && letra<='z')
    	letra-=32;
    
    ps=s; //reinicializa o ponteiro
    
    for(i=0;i<tam;i++,ps++)
    {
    	if(*ps==letra)
    	{
    		*(ppos+cont) = i; //preenche o vetor de posições
			cont++; 		
		}	
    }
	printf("\nQuantidade de letras encontradas: %i\n",cont);
    if(cont==0)
    {
    	printf("\nO caractere \'%c\' nao foi encontrado.",letra);
	}
	else
	{
		printf("\nO caractere \'%c\' foi encontrado nas posicoes:\n",letra);
    	for(i=0;i<cont;i++)
    	{
    		printf("%i\n",*(ppos+i)+1);
		}	 
	}     
	getch();
	return 0;
}

