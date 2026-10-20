#include <stdio.h>
#include <conio.h>

int main()
{
    float A[100], B[100], C[100], *p_a, *p_b ,*p_c;
    int d,q;
    
    p_a = A; /* inicialização do ponteiro */
    p_b = B;

    do
    {
      printf("Digite a quantidade de elementos: ");
      scanf("%i",&q);
    }while(q<0||q>100);
    
    printf ("Lendo os elementos da matriz A:\n");
    for (d = 0; d<q; d++)
    {         
        printf ("%io elemento:", d+1);
        scanf ("%f", p_a++);       
    }
    
    printf ("Lendo os elementos da matriz B:\n");
    for (d = 0; d<q; d++)
    {         
        printf ("%io elemento:", d+1);
        scanf ("%f", p_b++);        
    }
    p_a = A; /* inicialização do ponteiro */
    p_b = B;
    p_c = C;
    //Somando
    for (d = 0; d<q; d++)
    {         
        *p_c++ = *(p_a++) + *(p_b++); 
        //C[d]=A[d]*B[d];      
    }    
    p_c = C; /* posiciona o ponteiro no endereço inicial */
    printf ("Imprime os elementos da matriz ");
    for (d = 0; d<q; d++)
    {
        printf ("\nnum[%i] = %.2f", d, *(p_c++));
    }    
    
    getch();
    return 0;   
}

