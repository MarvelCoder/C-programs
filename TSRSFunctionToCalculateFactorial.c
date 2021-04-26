#include<stdio.h>

int calculateFactorial(int);

void main(){

    int n;
    printf("Please enter a number");
    scanf("%d",&n);

    printf("Factorial of %d is %d",n,calculateFactorial(n));
}

int calculateFactorial(int N){

    int result=1;
    while(N){
        result*=N;
        N--;
    }

    return result;
}
