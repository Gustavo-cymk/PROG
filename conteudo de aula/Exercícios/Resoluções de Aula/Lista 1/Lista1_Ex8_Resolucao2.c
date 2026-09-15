#include<stdio.h>
void recebe(float v[10], int q);
void mostra(float v[10], int q);
float media(float v[10], int q);
float valida();

int main()
{
    float nota[10];
	int quant=0;
    printf("\nControle de Notas\n");
    printf("\nQuantidade de Alunos: \n");
	quant=(int)valida();	
    recebe(nota,quant);    
    mostra(nota,quant);
    printf("\nMedia calculada: %.2f",media(nota,quant));
	return 0;
}

void recebe(float v[10], int q)
{
	int i;
	printf("\nNotas dos alunos:\n");
	for(i=0;i<q;i++)
	{
		printf("Aluno %i - ",i+1);
		v[i]=valida();	
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

float valida()
{
	int q;
	do
	{
	    printf("Digite o valor: ");
	    scanf("%i",&q);
	    if(q<0 || q>10)
	    	printf("O valor deve ser entre 0 e 10\n");
	}while(q<0 || q>10);
	return q;
}


