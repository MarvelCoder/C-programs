main(){

 int i,j,k=5;

 for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
        if(j<=i+k-2){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
    k=k-2;
 }

}
