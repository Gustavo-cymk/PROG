#include <stdio.h>
#include <conio.h>

int main()
{
    int num[5], *p_num, d,q;
    p_num = num; /* inicializacao do ponteiro */
    
    do
	{
    	printf("Digite a quantidade de elementos: ");
    	scanf("%i",&q);
	}while(q<=0 || q>5);

    printf ("Lendo os elementos da matriz:\n");
    for (d = 0; d<q; d++)
    {
        printf ("%io elemento - %i:", d+1,p_num);
        scanf ("%i", p_num++);
    }
    p_num = num; /* posiciona o ponteiro no endere�o inicial */
    printf ("Imprime os elementos da matriz ");
    for (d = 0; d<q; d++)
    {
        printf ("\nnum %i - %i = %i", d+1, p_num++,*(p_num));
    }    
    
    getch();
    return 0;   
}

