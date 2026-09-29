#include <stdio.h>

int main(){
int num=5, *p;
p=&num;
printf("Num: %i\n",num);
printf("Acesso indireto: %i\n",*p);
printf("Endereco num %p\n",&num);
printf("Endereco pont %p\n",p);

return 0;
}
