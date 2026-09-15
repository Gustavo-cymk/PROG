#include<stdio.h>
void recebe(float vet[][2], int x, int y);
void mostra(float vet[][2], int x, int y);

int main()
{
    float tabela[5][2];
    
    recebe(tabela,5,2); //&lista[0]
    mostra(tabela,5,2);

	return 0;
}
void mostra(float vet[][2],  int x, int y)
{
	int i, j;
	for(i=0;i<x;i++) //linhas
	{
		for(j=0;j<y;j++) //colunas
		{
			printf("\nValor[%i][%i] = %.2f",i,j,vet[i][j]);
		}	
	}
}//mostra

void recebe(float vet[][2],  int x, int y)
{
	int i,j;
	for(i=0;i<x;i++) //linhas
	{
		for(j=0;j<y;j++) //colunas
		{
			printf("Digite um valor [%i][%i]: ",i,j);
			scanf("%f",&vet[i][j]);
		}
	}	
}//recebe







