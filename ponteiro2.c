#include <stdio.h>

int main(){
int i, *p,v[5];
p=v;
for (i=0;i<5;i++,p++){
    printf("End %i\n",p);
    scanf("%i",p);
}
p=v;
for (i=0;i<5;i++){

    printf("\nEnd %i - Valor= %i",p+i,*(p+i));
}
return 0;
}
