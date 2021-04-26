main(){

    int i,j,k=7;

    for(i=1;i<=4;i++){
        for(j=1;j<=k;j++){
            if(j>i-1&&j<=k){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        k--;
    }

}
