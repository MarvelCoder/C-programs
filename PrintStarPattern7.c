main(){

 int i,j,k=4;
 char ch='A';


 for(i=1;i<=4;i++){
    for(j=1;j<=7;j++){
        if(j<i+k||j>i+2){
                printf("%c",ch);
                if(j<4)ch++;
                else ch--;
        }else{
            printf(" ");
            if(j<4)ch++;
            else ch--;
        }
    }
    printf("\n");
    ch='A';
    k-=2;
 }
}
