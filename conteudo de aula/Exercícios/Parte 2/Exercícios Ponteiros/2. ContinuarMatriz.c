#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    int num[5], *p_num, d=0,q=0;
    char resp='S';
    
    p_num = num; /* inicialização do ponteiro */

    printf ("Lendo os elementos da matriz:\n");

    while(toupper(resp)=='S'&& q<5)
    {         
        printf ("%io elemento:", q+1);
        scanf ("%i", p_num++);
        q++;
        printf("Deseja continuar (S/N)? : ");
        scanf(" %c",&resp); 
		         
    }
    
    p_num = num; /* posiciona o ponteiro no endereço inicial */
    printf ("Imprime os elementos da matriz ");
    for (d = 0; d<q; d++)
    {
        printf ("\nnum[%i] = %i", d, * (p_num ++));
    }    
    
    getch();
    return 0;   
}

