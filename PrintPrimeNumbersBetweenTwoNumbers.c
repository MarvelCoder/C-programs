main(){

int x,y,i,j;

printf("Enter two numbers");
scanf("%d %d",&x,&y);

for(i=x;i<=y;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }
    }
    if(j==i)printf("%d is Prime number\n",i);
}

}


