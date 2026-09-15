#include<stdio.h>

int ler_vetor(int vet[10]);
void mostrar_vetor(int vet[10], int quant);
int somar_vetor(int vet[10], int quant);

int main()
{
	int lista[10],tam=0,j=0;
	
	tam=ler_vetor(lista);
	mostrar_vetor(lista,tam);
	printf("\nSoma = %i",somar_vetor(lista,tam));
	
	return 0;
}

int ler_vetor(int vet[10])
{
	int i=0;
	do
	{
		printf("Digite um numero: ");
		scanf("%i",&vet[i]);	
	}while(vet[i++]>0 && i<=10);
	
	return i-1;	
}

void mostrar_vetor(int vet[10], int quant)
{
	int i;
	for(i=0;i<quant;i++)
	{
		printf("\nValor[%i]= %i",i,vet[i]);
	}
	
}

int somar_vetor(int vet[10], int quant)
{
	int i, soma=0;
	for(i=0;i<quant;i++)
	{
		soma+=vet[i];
	}
	return soma;
}