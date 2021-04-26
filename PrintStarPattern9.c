
main(){

 int i,j,k=3;

    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>i+k&&j<i+5){
                if(i%2==0){
                    if(j%2==0)printf("* ");
                }else{
                    if(j%2!=0)printf("* ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        k-=2;
    }
}
