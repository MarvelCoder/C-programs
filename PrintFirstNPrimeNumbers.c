main(){

int i,j,n;

scanf("%d",&n);
printf("\n");

    for(i=2;n>=1 && n<=10000;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            printf("%d ",i);
            --n;
        }
    }

}
