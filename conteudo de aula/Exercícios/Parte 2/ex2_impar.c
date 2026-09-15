#include <stdio.h>

int Impar(int x);

int main(void)
{ 
	int numero;
	printf("Informe o numero: ");
	scanf("%d", &numero);

	if (Impar(numero) == 1)  /// int Impar(int x)
		printf("\n\n\nO numero %d eh IMPAR\n", numero);
	else
		printf("\n\n\nO numero %d eh par\n", numero);
	return 0;
}
//deve retornar 0 se o número for par e 1 se ele for ímpar.
int Impar(int x)
{
	int resp;
	if(x%2==0)
		resp= 0;
	else
		resp= 1;
		
	return resp; 
}