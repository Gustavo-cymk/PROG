#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

float IMC(float *Peso, float *Altura);//protótipo
void mostra_status(float valor);

int main(void)
{	

	float vPeso, vAltura, ValorImc;

	printf("Informe o peso:\n");
	scanf("%f", &vPeso);
	printf("\nInforme a altura:\n");
	scanf("%f", &vAltura);
    
	ValorImc = IMC(&vPeso, &vAltura); //float IMC (float x, float y)
	//void mostra_status(float valor);
	mostra_status(ValorImc);
    
	return 0;
}
//definição
float IMC(float *Peso, float *Altura)
{ 
	return *Peso / (*Altura * *Altura);
}//imc

void mostra_status(float valor)
{
	if (valor < 18.5)
		printf("\nMuito magro\n");
	else
		if (valor >= 30.0)
			printf("\nMuito gordo\n");
		else
			printf("\nPeso razoavel\n");
}//mostra_status



