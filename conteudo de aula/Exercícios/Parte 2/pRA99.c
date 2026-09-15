/*
	Manipulação de um RA representado em formato numérico por
	meio de funcoes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	long long int vRA;
	
	printf("Informe o RA:\n");
	scanf("%lld", &vRA);
	
	printf("Escola: %03d\n", escola(vRA));
	printf("Curso : %03d\n", curso(vRA));
	printf("Ano ..: %02d\n", anoIngr(vRA));
	printf("Sem ..: %d\n", semIngr(vRA));
	printf("Turno : %d\n", turno(vRA));
	printf("Seq ..: %03d\n", sequencial(vRA));
	
	return 0;
}
