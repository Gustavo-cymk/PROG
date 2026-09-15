#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra1[13], palavra2[13];
    int i;
    int minuscula = 0, maiuscula = 0, digito = 0;

    printf("Digite a primeira palavra: ");
    gets(palavra1);

    printf("Digite a segunda palavra: ");
    gets(palavra2);

    if (strcmp(palavra1, palavra2) != 0) {
        printf("Nova senha invalida\n");
	}
    else
    {
    	if (strlen(palavra1) >= 6)
    	{
    		for (i = 0; palavra1[i] != '\0'; i++) {
        		if (islower(palavra1[i]))
            		minuscula = 1;

        		if (isupper(palavra1[i]))
            		maiuscula = 1;

        		if (isdigit(palavra1[i]))
            		digito = 1;
		    }
		}
	
    if (minuscula==1 && maiuscula==1 && digito==1)
        printf("Nova senha ok\n");
    else
        printf("Nova senha invalida\n");
	}
    return 0;
}