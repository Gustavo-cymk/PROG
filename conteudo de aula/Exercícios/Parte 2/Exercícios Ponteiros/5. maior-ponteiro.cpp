#include <stdio.h>
#include <stdlib.h>

void leitura(int *p,int tam);
int maior(int *p,int tam);

main()
{
int vetor[10],pos,tam;
printf("\nMostra o maior elemento de um vetor");
do{
   printf("\nTamanho do vetor: ");
   scanf("%i",&tam);
   fflush(stdin);
   }while(tam<=0 || tam>10);
printf("\nDigite os valores do vetor: ");
leitura(vetor,tam);
pos=maior(vetor,tam);
printf("\nO maior elemento do vetor = %i - na posicao %i - endereco: %u",*(vetor+pos),pos,vetor+pos);
printf("\n\n\n");
system("pause");
}//main

void leitura(int *p,int tam)
{
int i;
for(i=0;i<tam;i++,p++)
  {
  printf("\nEndereco: %u - vetor[%i]= ",p,i);
  scanf("%i",p);
  fflush(stdin);
  }//for
}//leitura

int maior(int *p,int tam)
{
int m,i,pos;
m=*p;  //atribui o valor do elemento zero do vetor
pos=0;
p++;    //aponta para o elemento 1 do vetor
for(i=1;i<tam;i++,p++)
  if(*p > m)
    {
    m=*p;
    pos=i;
    }//if
return pos;
}//maior











    
    










