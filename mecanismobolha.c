#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebe(int *p, int tam);
void mostra(int *p, int tam);
void bolha(int *p, int tam);

int main(){
    int v[10];
    recebe(v,10);
    printf("\nVetor original\n");
    mostra(v,10);
    bolha(v,10);
    printf("\nVetor ordenado\n");
    mostra(v,10);
    return 0;
}
void recebe(int *p, int tam){
    for (int i=0;i<tam;i++){
        printf("Digite um valor:");
        scanf("%d",p+i);
    }
}
void mostra(int*p, int tam){
    for(int i=0;i<tam;i++){

        printf("%d ",*(p+i));
    }
}
void bolha(int *p,int tam){
    int i,j,temp;
    for (i=tam-1;i>=1;i--){
        for(j=0;j<i;j++){
            if(*(p+j)>*(p+j+1)){
            temp = *(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1) = temp;
            }
        }
    }
}