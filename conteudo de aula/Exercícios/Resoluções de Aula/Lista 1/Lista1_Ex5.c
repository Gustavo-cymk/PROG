#include<stdio.h>
void recebe(float v[10], int q);
void mostra(float v[10], int q);
float media(float v[10], int q);
int main()
{
    float nota[10];
	int quant=0;
    do
	{
	    printf("Digite a quantidade de alunos: ");
	    scanf("%i",&quant);
	    if(quant<0 || quant>10)
	    	printf("A quantidade deve ser entre 0 e 10 alunos\n");
	}while(quant<0 || quant>10);	
    recebe(nota,quant);    
    mostra(nota,quant);
    printf("\nMedia calculada: %.2f",media(nota,quant));
	return 0;
}

void recebe(float v[10], int q)
{
	int i;
	for(i=0;i<q;i++)
	{
		printf("Digite a nota do aluno %i: ",i+1);
		scanf("%f",&v[i]);
	}
}

void mostra(float v[10], int q)
{
	int i;
	for(i=0;i<q;i++)
	{
		printf("\nAluno %i - Nota: %.2f ",i+1,v[i]);
	}
}

float media(float v[10], int q)
{
	int i;
	float soma=0;
	for(i=0;i<q;i++)
	{
		soma+=v[i];
	}
	return soma/q;
}







