#include<stdio.h>

int checkPrimeNumber(int);

void main(){

    int n;

    printf("Enter value of n");
    scanf("%d",&n);

    if(checkPrimeNumber(n))printf("%d is prime number",n);
    else printf("%d is NOT prime number",n);
}

int checkPrimeNumber(int N){
    int i;

    for(i=2;i<=N;i++){
        if(N%i==0)break;
    }

    if(i==N)return 1;
    else return 0;
}
