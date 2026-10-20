#include <stdio.h>
#include <conio.h>

int main()
{
    float n1[100], n2[100], m[100], *p_n1, *p_n2 ,*p_m;
    int d,q;
    
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;

	do
    {
      printf("Digite a quantidade de alunos: ");
      scanf("%i",&q);
    }while(q<0||q>100);
    
    for(d = 0; d<q; d++,p_n1++,p_n2++)
    {
	   do
	   {
	      printf("Aluno %d - Digite a nota 1: ",d+1);
	      scanf("%f",p_n1);
	   }while(*(p_n1)<0||*(p_n1)>10);
	   
	   do
	   {
	      printf("Aluno %d - Digite a nota 2: ",d+1);
	      scanf("%f",p_n2);
	   }while(*(p_n2)<0||*(p_n2)>10);
	   
	}
        
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    //Media
    for (d = 0; d<q; d++)
    {         
        *p_m++ = ((*p_n1++)+(*p_n2++))/2; 
	}
	
	p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    printf ("\nLendo os elementos da matriz:\n");

    printf ("\tNota1\tNota2\tMedia\n");
    for (d = 0; d<q; d++)
    {         
        printf("Aluno %i\t%.2f\t%.2f\t%.2f\n", d+1, *p_n1++, *p_n2++, *p_m++); 
   
    }
    
    p_n1 = n1; /* inicialização do ponteiro */
    p_n2 = n2;
    p_m = m;
    
    //Final
    for (d = 0; d<q; d++,p_m++)
    {         
		if(*(p_m)>=7)   
		{
			printf("\nAluno %d - Media %.2f - Aprovado",d+1,*(p_m));
		}
		else if (*(p_m)>=4)
		{
			printf("\nAluno %d - Media %.2f - Exame",d+1,*(p_m));
		}
		else
		{
			printf("\nAluno %d - Media %.2f - Reprovado",d+1,*(p_m));
		}
    }    
 
    
    getch();
    return 0;   
}

