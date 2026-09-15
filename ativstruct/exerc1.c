#include <stdio.h>

struct regData{
    unsigned int dia, mes;
    unsigned int ano;
};
int main (){
    struct regData data1,data2;
    data1.dia = 15;
    data1.mes = 8;
    data1.ano = 2009;
    printf("%d/%d/%d\n",data1.dia,data1.mes,data1.ano);
    scanf(" %d",&data2.dia);
    scanf(" %d",&data2.mes);
    scanf(" %d",&data2.ano);
    printf("%d/%d/%d\n",data2.dia,data2.mes,data2.ano);
    if (data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano){
        printf("emgual");
    }
    else
        printf("diferente");
return 0;
}
