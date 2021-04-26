#include<stdio.h>

void printDecimalToBinary(int);

void main(){

    int n;
    printf("Enter decimal number");
    scanf("%d",&n);

    printDecimalToBinary(n);
}

void printDecimalToBinary(int n){

    if(n==0)return;

    printDecimalToBinary(n/2);

    printf("%d",n%2);
}
