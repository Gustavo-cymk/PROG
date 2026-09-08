#include <stdio.h>
#include <string.h>
#include <ctype.h>

int caso3 (char s1[13]){
    int ma,mi;
    ma = mi = 0;
    for (int i = 0;s1[i] != '\0';i++){
        if(isupper(s1[i]) && ma == 0)
        ma = 1 ;
        else if(islower(s1[i]) && mi == 0)
        mi = 1;
    }
    if (ma == 1 && mi == 1)
        return 1;
    else
        return 0;
}
int main (){
    char str1[13];
    char str2[13];
    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);
    int cmp = strcmp(str1,str2);
    if (cmp != 0){
        printf("caso1");
        printf("Senha invalida");
    }
    else if (cmp == 0)
        if (sizeof(str1) < 6){
            printf("caso2");
            printf("Senha invalida");
        }
        else if (sizeof(str1 >= 6 ))
            if(caso3(str1) == 1)
                printf("Senha valida");
            else
                printf("Senha invalida");
return 0;
}
