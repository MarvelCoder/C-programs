main(){

 int i,j,k=4;

 for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
        if(j>k-1&&j<5){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
    k--;
 }


}
