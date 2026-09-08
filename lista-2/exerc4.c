#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caso2(char s1[21],char s2[21]){
    for(int i = 0; s1[i] != '\0'; i++){
        s1[i] = toupper(s1[i]);
    }
    for(int i = 0; s2[i] != '\0'; i++){
        s2[i] = toupper(s2[i]);
    }
    int res = strcmp(s1,s2);
    if (res == 0)
        printf("Strings sao identicas: case insensitive");
    else
        printf("Strings sao diferentes");
}

int main(){
    char str1[21];
    char str2[21];
    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);
    int cmp = strcmp(str1,str2);
    if (cmp == 0)
        printf("Strings sao identicas: case sensitive");
    else if (cmp != 0)
        caso2(str1,str2);

return 0;
}
