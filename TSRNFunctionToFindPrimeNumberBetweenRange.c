#include<stdio.h>

void findPrimeNumbersInRange(int,int);

void main(){

    int N1, N2;

    printf("Enter two different numbers");
    scanf("%d%d",&N1,&N2);

    findPrimeNumbersInRange(N1,N2);
}

void findPrimeNumbersInRange(int x,int y){

    int i,j;

    printf("Prime numbers between %d and %d are ",x,y);

    for(i=x+1;i<y;i++){
        for(j=2;j<i;j++){
            if(i%j==0)break;
        }
        if(i==j)printf("%d ",i);
    }
}
