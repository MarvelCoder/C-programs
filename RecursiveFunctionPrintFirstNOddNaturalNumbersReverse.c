#include<stdio.h>

void printFirstOddNaturalNumbersReverse(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printFirstOddNaturalNumbersReverse(n);
}

void printFirstOddNaturalNumbersReverse(int n){

    if(n==0)return;

    printf("%d ",n*2-1);

    printFirstOddNaturalNumbersReverse(n-1);
    return;
}
