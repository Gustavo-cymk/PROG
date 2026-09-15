#include<stdio.h>
void recebe(float vet[], int tam);
void mostra(float vet[], int tam);

int main()
{
    float lista[5];
    
    recebe(lista,5); //&lista[0]    
    mostra(lista,5);

	return 0;
}
void mostra(float vet[], int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
	 printf("\nValor[%i] = %.2f",i,vet[i]);
	}	 
}//mostra

void recebe(float vet[], int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("Digite um valor [%i]: ",i);
		scanf("%f",&vet[i]);
	}             
}//recebe
	
                 
  
                                     

                                     
  
                 