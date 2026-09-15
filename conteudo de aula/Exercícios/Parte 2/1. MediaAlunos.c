#include <stdio.h>
#include <conio.h>

int main()
{
    float n1[100], n2[100], m[100], *p_n1, *p_n2 ,*p_m;
    int i,q;
    
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
   
	do
    {
      printf("Digite a quantidade de alunos: ");
      scanf("%i",&q);
    }while(q<0||q>100);
    
    for(i = 0; i<q; i++,p_n1++,p_n2++)
    {
	   do
	   {
	      printf("Aluno %d - Digite a nota 1: ",i+1);
	      scanf("%f",p_n1);
	   }while(*(p_n1)<0||*(p_n1)>10);
	   
	   do
	   {
	      printf("Aluno %d - Digite a nota 2: ",i+1);
	      scanf("%f",p_n2);
	   }while(*(p_n2)<0||*(p_n2)>10);
	   
	}
        
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    //Media
    for (i = 0; i<q; i++)
    {         
        *p_m++ = ((*p_n1++)+(*p_n2++))/2; 
	}
	
	p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    printf ("\nLendo os elementos da matriz:\n");

    printf ("\tNota1\tNota2\tMedia\n");
    for (i = 0; i<q; i++)
    {         
        printf("Aluno %i\t%.2f\t%.2f\t%.2f\n", i+1, *p_n1++, *p_n2++, *p_m++); 
   
    }
    
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    //Final
    for (i = 0; i<q; i++,p_m++)
    {         
		if(*(p_m)>=7)   
		{
			printf("\nAluno %d - Media %.2f - Aprovado",i+1,*(p_m));
		}
		else if (*(p_m)>=4)
		{
			printf("\nAluno %d - Media %.2f - Em recuperacao",i+1,*(p_m));
		}
		else
		{
			printf("\nAluno %d - Media %.2f - Reprovado",i+1,*(p_m));
		}
    }    
 
    
    getch();
    return 0;   
}

