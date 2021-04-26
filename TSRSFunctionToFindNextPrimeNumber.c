#include<stdio.h>

int returnNextPrimeNumber(int);

void main(){

    int N;
    printf("Enter number");
    scanf("%d",&N);

    printf("Next prime number from %d is %d",N,returnNextPrimeNumber(N));
}

int returnNextPrimeNumber(int n){

    int i,j;
    for(i=n+1;;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)break;
        }
        if(i==j)return i;
    }
}
