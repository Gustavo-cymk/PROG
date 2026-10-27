void bolha(int *p,int tam){
    int i,j,temp;
    for (i=tam-1;i>=1;i--){
        for(j=0;j<i;j++){
            if(*(p+j)>*(p+j+1)){
            temp = *(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1) = temp;
            }
        }
    }
}