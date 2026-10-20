#include <stdio.h>
#include <stdlib.h>

void leitura(float *p,int tam);
int maior_temp(float *p,int tam);
float media_temp(float *p,int tam);
int inferior_media(float *p,int tam,int *inf,float m);
void mostra(float *p,int *inf,int qtde);

main()
{
	float temp[31],media;
	int dias,maior,inf[31],qtde,aux[31];
	
	printf("\nPrograma Climatico\n");
	do
	{
	   printf("\nQtos dias - max.31: ");
	   scanf("%i",&dias);
	}while(dias<1 || dias>31);
	
	leitura(temp,dias);
	
	maior=maior_temp(temp,dias);
	printf("\n\nA maior temperatura= %.2f e ocorreu no dia %i",*(temp+maior),maior+1);
	
	media=media_temp(temp,dias);
	printf("\n\nA temperatura Media foi = %.2f",media);
	
	qtde=inferior_media(temp,dias,inf,media);
	printf("\n\nTemperaturas Inferiores a Media: ");
	mostra(temp,inf,qtde);
	
	system("pause");
}//main

void leitura(float *p,int tam)
{
  	int i;
  	for(i=0;i<tam;i++,p++)
  	{
	  printf("\nTemperatura do %i dia: ",i+1);
	  scanf("%f",p);
  	}
}//leitura

int maior_temp(float *p,int tam)
{
	float maior;
	int i,pos;
	maior=*p;   //recebe o primeiro elemento
	p++;
	pos=0;      //primeira posicao
	for(i=1;i<tam;i++,p++)
	{
		if(*p>maior)
	    {
	        maior=*p;
	        pos=i;
	    }
	}

	return pos;
}//maior_temp

float media_temp(float *p,int tam)
{
	float soma=0;
	int i;
	for(i=0;i<tam;i++,p++)
	{
	    soma+=*p;
    }
	return(soma/tam);
}//media_temp

int inferior_media(float *p,int tam,int *inf,float m)
{
	int qtde,i;
	qtde=0;
	for(i=0;i<tam;i++,p++)
	{
	    if(*p<m)
	    {
		    qtde++;
		    *inf=i;
		    inf++;
	    }
    }
	return qtde;
}//inferior_media

void mostra(float *p,int *inf,int qtde)
{
	int i;
	for(i=0;i<qtde;i++,inf++)
	{
		printf("\nA temperatura= %.2f - no dia %i\n",*(p+*inf),*inf+1);
	
	}             
	printf("\n");
}//mostra     







