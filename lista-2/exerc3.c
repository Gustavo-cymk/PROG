#include <stdio.h>
#include <ctype.h>
void Upper(char st[17],int n){
    for (int i = 0;i < n;i++){
        st[i] = toupper(st[i]);
    }
    printf("\n%s",st);
}
void Lower(char st[17],int n){
    for (int i = 0;i < n;i++){
        st[i] =tolower(st[i]);
    }
    printf("\n%s",st);
}
void PrimeiraM(char st[17], int n){
    st[0] = toupper(st[0]);
    for (int i = 1;i<n;i++){
        st[i] = tolower(st[i]);
    }
    printf("\n%s",st);
}
void Invertido(char st[17],int n){
    for(int i = 0;i<n;i++){
        if(isupper(st[i]))
            st[i] = tolower(st[i]);
        else if(islower(st[i]))
            st[i] = toupper(st[i]);
    }
    printf("\n%s",st);
}
int main(){
    char s[17];
    fgets(s,sizeof(s),stdin);
    printf("\n%s",s);
    Lower(s,sizeof(s));
    Upper(s,sizeof(s));
    PrimeiraM(s,sizeof(s));
    Invertido(s,sizeof(s));
return 0;}
