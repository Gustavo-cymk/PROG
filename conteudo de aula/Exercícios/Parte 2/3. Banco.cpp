#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
       char nome[30];
       int conta;
       float saldo;
       };
       
int main()
{
	struct cliente cli[10],*pc;
	int op,cont=0,i,num_conta,achou=0;
	float valor;
	pc=cli;
	
	do
	{
	   system("cls");
	   printf("[1]Cadastro\n[2]Deposito\n[3]Retirada\n[4]Fim\nOpcao: ");
	   scanf("%i",&op);
	   fflush(stdin);
	   switch(op)
	   {
	      case 1:  if(cont<10)
	               {
		               	printf("\nNome: ");
						gets((pc+cont)->nome);
						fflush(stdin);
						(pc+cont)->conta=cont+1000;						
						(pc+cont)->saldo=0;
						printf("\nConta: %i\n",(pc+cont)->conta);
						cont++;
						system("pause");	               	
	               }
	               else
	               	printf("\nCadastro Lotado\n");
	              break;
	      case 2:
	      case 3: 
		  		printf("\nConta: ");
				scanf("%i",&num_conta);
				fflush(stdin);
				for(i=0;i<cont;i++)
				{
					if((pc+i)->conta==num_conta)
	  				{
	  					achou=1; //apenas para marcar que encontrou o cliente
	  					printf("\nNome: %s\nSaldo: %.2f",(pc+i)->nome,(pc+i)->saldo);
	  					printf("\nValor a ser depositado/retirado: ");
						scanf("%f",&valor);
						fflush(stdin);
						if(op==2)
	  						(pc+i)->saldo+=valor;
						else
	 					{
	  						if(valor<=(pc+i)->saldo)
	    						(pc+i)->saldo-=valor;
	    					else
	    					{
	    						printf("\nSaldo insuficiente\n");
	    					
							}	    					
	    				}
	    				printf("\nSaldo Atualizado: %.2f\n\n",(pc+i)->saldo);      
						system("pause");
	    			}	        				  				
	  			}
	  			if(achou==0)
	  			{
	  				printf("\nConta invalida\n");
	                system("pause");
				}
				 
	            break;
	    }//switch
	}while(op!=4);
	return 0;
}
           

           
   
   
   
   
   














             
