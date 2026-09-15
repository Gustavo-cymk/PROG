/*
	Programa que decompõe o RA informado, representando-o como STRING
	Versão simplificada da lógica, sem subrotinas.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	char RAinfo[14], escola[4], curso[4], anoIngr[3], semIngr[2],
		 turno[2], sequencial[4];
	int cont, iSeq;

	printf("Informe o RA: ");
	scanf("%s", RAinfo);
	
	cont = 0;
	while (cont < 13)
	{	if (cont < 3)
			escola[cont] = RAinfo[cont];
		else
			if (cont < 6)
				curso[cont - 3] = RAinfo[cont];
			else
				if (cont < 8)
					anoIngr[cont - 6] = RAinfo[cont];
				else
					if (cont < 9)
						semIngr[cont - 8] = RAinfo[cont];
					else
						if (cont < 10)
							turno[cont - 9] = RAinfo[cont];
						else
							sequencial[cont - 10] = RAinfo[cont];
			
		cont = cont + 1;
	}
	escola[3] = '\0';
	curso[3] = '\0';
	anoIngr[2] = '\0';
	semIngr[1] = '\0';
	turno[1] = '\0';
	sequencial[3] = '\0';
	
	printf("\n\n");
	printf("Escola ....:   %3s\n", escola);
	printf("Curso .....:   %3s\n", curso);
	printf("Ano .......:   %3s\n", anoIngr);
	printf("Semestre ..:   %3s\n", semIngr);
	printf("Turno .....:   %3s\n", turno);
	printf("Sequencial :   %3s\n", sequencial);
	
	iSeq = atoi(sequencial);
	iSeq = iSeq + 1;
	
	printf("\n\nO proximo RA serah %s%s%s%s%s%03d\n", escola, curso,
			anoIngr, semIngr, turno, iSeq);
			
	return 0;
}
