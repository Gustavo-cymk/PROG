#include <stdio.h>
void mediaNotas(float notas[10],int n){
    float somanotas = 0;
    for(int i = 0;i<n;i++){
    somanotas +=notas[i];
    }
    printf("\nMedia das notas:%.2f",somanotas/n);

}
int main(){
    int al;
    printf("insira a quantidade de aluno:");
    scanf("%d",&al);
    float notas[al];
    for (int i = 0;i<al;i++){
        printf("Digite a nota do aluno %d\n",i+1);
        scanf("%f",&notas[i]);
    }
    mediaNotas(notas,al);
return 0;
}
