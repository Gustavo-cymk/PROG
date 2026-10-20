#include <stdio.h>

typedef struct data {
    int dia;
    int mes;
    int ano;
} data;

typedef struct medicao {
    int idEstacao;
    data dataMedicao;
    int pluviometria;
    float tempMaxima;
} medicao;

void receberMedicoes(medicao v[], int n);
void mostrarRegistrosData(medicao v[], int n, data dataInfo);
int compararDatas(data d1, data d2);
int quantidadeRegistrosData(medicao v[], int n, data dataInfo);

int somaPluviometria(medicao v[], int n);
float mediaTemperatura(medicao v[], int n);

int somaPluviometriaData(medicao v[], int n, data dataInfo);
float mediaTemperaturaData(medicao v[], int n, data dataInfo);

int main()
{
    medicao medicoes[10];
    data dataInfo;
    int n, qtd, somaPluv;
    float mediaTemp;

	printf("Digite o numero de dias que deseja registrar: ");
	scanf("%d",&n);
    receberMedicoes(medicoes, n);

    /* b) Soma da pluviometria de todas as estações */
    somaPluv = somaPluviometria(medicoes, n);

    /* d) Temperatura média de todas as estações */
    mediaTemp = mediaTemperatura(medicoes, n);

    printf("\n========================================\n");
    printf("             DADOS GERAIS\n");
    printf("========================================\n");
    printf("Soma da pluviometria: %d\n", somaPluv);
    printf("Temperatura media: %.2f\n", mediaTemp);

    /* g) Repetir a consulta até informar 0/0/0 */
    do
    {
        printf("\nInforme a data de interesse (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &dataInfo.dia, &dataInfo.mes, &dataInfo.ano);

        if (dataInfo.dia == 0 && dataInfo.mes == 0 && dataInfo.ano == 0)
        {
            printf("\nPrograma encerrado.\n");
        }
        else
        {
            /* f) Verificar se existem registros para a data */
            qtd = quantidadeRegistrosData(medicoes, n, dataInfo);

            if (qtd == 0)
            {
                printf("\nErro: nao existem registros para essa data.\n");
            }
            else
            {
                /* a) Mostrar registros da data */
                printf("\n========================================\n");
                printf("REGISTROS DA DATA %02d/%02d/%04d\n",dataInfo.dia, dataInfo.mes, dataInfo.ano);
                printf("========================================\n");

                mostrarRegistrosData(medicoes, n, dataInfo);

                /* c) Soma da pluviometria da data */
                somaPluv = somaPluviometriaData(medicoes, n, dataInfo);

                printf("\nSoma da pluviometria da data: %d\n",somaPluv);

                /* e) Temperatura média da data */
                mediaTemp = mediaTemperaturaData(medicoes, n, dataInfo);

                printf("Temperatura media da data: %.2f\n",mediaTemp);
            }
        }

    } while (!(dataInfo.dia == 0 && dataInfo.mes == 0 && dataInfo.ano == 0));

    return 0;
}


/* Recebe os registros */
void receberMedicoes(medicao v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nInforme registro #%02d\n", i + 1);

        printf("Estacao ....: ");
        scanf("%d", &v[i].idEstacao);

        printf("Data Medicao: ");
        scanf("%d/%d/%d",&v[i].dataMedicao.dia,&v[i].dataMedicao.mes,&v[i].dataMedicao.ano);

        printf("Pluviometria: ");
        scanf("%d", &v[i].pluviometria);

        printf("Temp. Maxima: ");
        scanf("%f", &v[i].tempMaxima);
    }
}

/* Compara duas datas */
int compararDatas(data d1, data d2)
{
    if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano)
    {
        return 1;
    }
    return 0;
}


/* a) Mostra todos os registros de uma determinada data */
void mostrarRegistrosData(medicao v[], int n, data dataInfo)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (compararDatas(v[i].dataMedicao, dataInfo))
        {
            printf("\nEstacao: %d\n",v[i].idEstacao);
            printf("Data: %02d/%02d/%04d\n",
                   v[i].dataMedicao.dia,
                   v[i].dataMedicao.mes,
                   v[i].dataMedicao.ano);
            printf("Pluviometria: %d\n",v[i].pluviometria);
            printf("Temperatura maxima: %.2f\n",v[i].tempMaxima);
        }
    }
}


/* Verifica quantos registros existem para uma data */
int quantidadeRegistrosData(medicao v[], int n, data dataInfo)
{
    int i;
    int qtd = 0;

    for (i = 0; i < n; i++)
    {
        if (compararDatas(v[i].dataMedicao, dataInfo))
        {
            qtd++;
        }
    }

    return qtd;
}


/* b) Soma da pluviometria de todas as estações */
int somaPluviometria(medicao v[], int n)
{
    int i;
    int soma = 0;

    for (i = 0; i < n; i++)
    {
        soma = soma + v[i].pluviometria;
    }

    return soma;
}


/* d) Temperatura média de todas as estações */
float mediaTemperatura(medicao v[], int n)
{
    int i;
    float soma = 0;

    for (i = 0; i < n; i++)
    {
        soma = soma + v[i].tempMaxima;
    }

    return soma / n;
}


/* c) Soma da pluviometria de uma determinada data */
int somaPluviometriaData(medicao v[], int n, data dataInfo)
{
    int i;
    int soma = 0;

    for (i = 0; i < n; i++)
    {
        if (compararDatas(v[i].dataMedicao, dataInfo))
        {
            soma = soma + v[i].pluviometria;
        }
    }

    return soma;
}


/* e) Temperatura média de uma determinada data */
float mediaTemperaturaData(medicao v[], int n, data dataInfo)
{
    int i;
    int qtd = 0;
    float soma = 0;

    for (i = 0; i < n; i++)
    {
        if (compararDatas(v[i].dataMedicao, dataInfo))
        {
            soma = soma + v[i].tempMaxima;
            qtd++;
        }
    }

    return soma / qtd;
}