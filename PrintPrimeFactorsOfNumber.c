main(){

 int x,i,j,k;

 scanf("%d",&x);
 printf("\n");

    for(i=2;i<=x && x<=10000;i++){

        for(j=2;j<=i;j++){
            if(i%j==0)break;
        }

        if(i==j){
            for(k=0;1;k++){
                if(x%i==0){
                    x/=i;
                    printf("%d ",i);
                }else break;
            }
        }

    }

}

