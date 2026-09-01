#include <stdio.h>
#include <ctype.h>

int main(){
    int letras,leMa,leMi,num,esp;
    letras = leMa = leMi = num = esp = 0;
    char s[20];
    fgets(s,sizeof(s),stdin);
    for (int i = 0;s[i] != '\0' ;i++){
        if(isalpha(s[i]))
            letras++;
        if(isupper(s[i]))
            leMa++;
        else if(islower(s[i]))
            leMi++;
        else if(isdigit(s[i]))
            num++;
        else
            esp++;
    }
    printf("\nLetras:%d \nLetras maiusculas%d \nLetras minusculas%d \nDigitos nuericos:%d \nCaracteres especias:%d",letras,leMa,leMi,num,esp-1);
return 0;
}
