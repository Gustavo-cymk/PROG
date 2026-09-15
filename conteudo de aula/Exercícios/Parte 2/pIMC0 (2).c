#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{	float vPeso, vAltura, ValorImc;

	printf("Informe o peso:\n");
	scanf("%f", &vPeso);
	printf("\nInforme a altura:\n");
	scanf("%f", &vAltura);

	ValorImc = IMC(vPeso, vAltura);

	if (ValorImc < 18.5)
		printf("\nMuito magro\n");
	else
		if (ValorImc >= 30.0)
			printf("\nMuito gordo\n");
		else
			printf("\nPeso razoavel\n");

	return 0;
}
