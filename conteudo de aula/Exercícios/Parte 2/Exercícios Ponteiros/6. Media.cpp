#include <stdio.h>
#include <conio.h>

void receber(float *p);
void mostrar(float *p);
float calculaMedia(float *p);

int main()
{
    float num[10], *p_num;
	//p_num = num;
    receber(num);
    mostrar(num);
    printf("\n\nMedia = %.2f",calculaMedia(num)); 
    
    getch();
    return 0;   
}

void receber(float *p)
{
	int d;
	for (d = 0; d<10; d++)
    {
        printf ("Elemento [%i]: ", d);
        scanf ("%f", p++);
    }
}

void mostrar(float *p)
{
    int d;
	printf ("\n\nImprime os elementos do vetor:");
    for (d = 0; d<10; d++)
    {
        printf ("\nnum[%i] = %.2f", d, *(p++));
    }  
}

float calculaMedia(float *p)
{
	int d;
	float soma;
	
	for (d = 0; d<10; d++,p++)
    {
   		soma+=*p;
	}
	return (soma/10);    	
}




