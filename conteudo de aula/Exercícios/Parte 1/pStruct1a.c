#include <stdio.h>

struct data { int dia, mes, ano;};

struct medicao { int idEstacao;
				 struct data dataMedicao;
				 int pluviometria;
				 float tempMaxima;
				};
				
int main(void)
{	struct medicao medicoes[10];
	struct data dataInfo;
	int cont;
	
	cont = 0;
	while (cont < 3)//teste com 3 registros
	{	printf("Informe registro #%02d\n", cont + 1);
		printf("Estacao ....: ");
		scanf("%d", &medicoes[cont].idEstacao);
		printf("Data Medicao: ");
		scanf("%d/%d/%d", &medicoes[cont].dataMedicao.dia, 
						  &medicoes[cont].dataMedicao.mes,
						  &medicoes[cont].dataMedicao.ano);
		printf("Pluviometria: ");
		scanf("%d", &medicoes[cont].pluviometria);
		printf("Temp. Maxima: ");
		scanf("%f", &medicoes[cont].tempMaxima);
		
		cont = cont + 1;
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Informe a data de interesse: ");
	scanf("%d/%d/%d", &dataInfo.dia, &dataInfo.mes, &dataInfo.ano);
	
	return 0;
}
