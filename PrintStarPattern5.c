main(){

 int i,j,k=3;

 for(i=1;i<=4;i++){
    for(j=1;j<=7;j++){
        if(j>k && j<=i+3){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
    k--;
 }



}
