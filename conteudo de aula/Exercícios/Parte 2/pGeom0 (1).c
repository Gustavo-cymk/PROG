#include <stdio.h>
#include <math.h>
#include <ctype.h>

int quadCartesiano(float x, float y)
{	return 1;
}

int main(void)
{	float x, y;
	int quadrante;
	
	printf("Informe a abscissa:\n");
	scanf("%f", &x);
	
	printf("Informe a ordenada:\n");
	scanf("%f", &y);
	
	quadrante = quadCartesiano(x, y);
	
	if (quadrante == 0)
		puts("O ponto esta na origem do plano cartesiano");
	else
		if (quadrante == 5)
			printf("O ponto (%.1f, %.1f) esta sobre o eixo x\n", x, y);
		else
			if (quadrante == 6)
				printf("O ponto (%.1f, %.1f) esta sobre o eixo y\n", x, y);
			else
				printf("O ponto (%.1f, %.1f) esta no quadrante %d\n", 
						x, y, quadrante);
	
	return 0;
}
