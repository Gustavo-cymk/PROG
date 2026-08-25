#include <stdio.h>
void maiorValor(int v[],int n){
    int maior = 0;
    for(int i = 0;i<n;i++){
        if (v[i]>maior){
            maior = v[i];
        }
    }
    printf("O maior valor:%d",maior);
}
int main(){
int i=0;
int num[10];
printf("Insira um valor:\n");
scanf("%d",&num[i]);
while(num[i] > 0 ){
    i++;
    printf("Insira um valor:\n");
    scanf("%d",&num[i]);
}
maiorValor(num,i);


return 0;
}
