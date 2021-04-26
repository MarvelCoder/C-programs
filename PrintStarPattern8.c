main(){

 int i,j,k=2,l=1;

    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j>i+k&&j<i+4){
                printf("%d",l);
                if(i>1&&j<4)l++;
                else l--;
            }else{
                printf(" ");
            }
        }
        printf("\n");
        l=1;
        k-=2;
    }
}
