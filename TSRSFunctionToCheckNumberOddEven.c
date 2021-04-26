#include<stdio.h>

int checkEvenOdd(int);

void main(){

    int n;
    printf("Enter number");
    scanf("%d",&n);

    if(checkEvenOdd(n)) printf("Number is odd");
    else printf("Number is even");
}

int checkEvenOdd(int N){
    return N%2;
}
