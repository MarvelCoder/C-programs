
#include<stdio.h>

void printDecimalToOctal(int);

void main(){

    int n;
    printf("Enter decimal number");
    scanf("%d",&n);

    printDecimalToOctal(n);
}

void printDecimalToOctal(int n){

    if(n==0)return;

    printDecimalToOctal(n/8);

    printf("%d",n%8);
}
