#include <stdio.h>
void leitura(int *p,int tam);
void mostra(int *p,int tam);
int busca_maior(int *p,int tam){
int i , m;
m=*p;
for(i=1;i<tam:i++)
    {
        if(m<*(p+i))
            m=*(p+i);
    }
return m;
}
int main()
{
    int vet[10],maior;
    leitura(vet,10);
    mostra(vet,10);
    maior=busca_maior(vet,10);
    printf("\nMaior valor = %i",maior);
    return 0;
}
void leitura(int *p,int tam)
{
    int i;
    for (i=0;i<tam;i++,p++)
        printf("Dgite valor um valor");
    scanf("%i",p)
}
void mostra(int *p,int tam){
int i;
for (i=0;i<tam;i++,p++){
    printf("%i",p)
}
}
