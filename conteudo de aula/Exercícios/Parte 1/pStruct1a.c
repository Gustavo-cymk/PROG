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
	while (cont < 1)//teste com 3 registros
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
    for (int i = 0;i < cont ; i++){
        if( medicoes[i].dataMedicao.dia == dataInfo.dia &&
            medicoes[i].dataMedicao.mes == dataInfo.mes &&
            medicoes[i].dataMedicao.ano == dataInfo.ano){
                printf("Data:%d/%d/%d\n",dataInfo.dia,dataInfo.mes,dataInfo.ano);
                printf("Estacao:%d\n",medicoes[i].idEstacao);
                printf("Pluviometria:%d\n",medicoes[i].pluviometria);
                printf("Temperatura Maxima:%.2f\n",medicoes[i].tempMaxima);
        }
    }
    int somapluv = 0;
    for(int i = 0;i<cont;i++){
        somapluv += medicoes[i].pluviometria;
    }
    printf("Soma de pluviometria da estacoes:%d\n",somapluv);

	return 0;
}
