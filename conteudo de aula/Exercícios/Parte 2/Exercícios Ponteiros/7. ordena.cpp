#include<stdio.h>
#include<conio.h>

void leitura(int *p,int tam);
void ordena(int *p,int tam);
void mostra(int *p,int tam);

main()
{
    int v[10];

	leitura(v,10);
	ordena(v,10);
	printf("\nNumeros Ordenados:");
	mostra(v,10);
	getch();
}//main

void leitura(int *p,int tam)
{
	int i;
	
	for(i=0;i<tam;i++,p++)
	{
	  printf("Mat[%i] = ",i);
	  scanf("%i",p);
	fflush(stdin);
	}//for 
}//leitura
void ordena(int *p,int tam)
{
   int aux,i,j;
   for(i=0;i<tam;i++)
   {
      mostra(p,10);
	  for(j=i+1;j<tam;j++)
      {
         if(*(p+i)>*(p+j))
     	 {
	      aux=*(p+i);
	      *(p+i)=*(p+j);
	      *(p+j)=aux;                 
      	 }//if  
	  }
	  //mostra(p,10);
	  printf("\n");

	}
}//ordena

void mostra(int *p, int tam)
{
     int i;
     for(i=0;i<tam;i++,p++)
     {
     	if(i==(tam-1))
     	{
     		printf("%i",*p);
		}
		else
		{
			printf("%i-",*p);
		}
		
	 }
     
     
}//mostra
