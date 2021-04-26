#include<stdio.h>

void printFirstOddNaturalNumbers(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printFirstOddNaturalNumbers(n);
}

void printFirstOddNaturalNumbers(int n){

    if(n==0)return;

    printFirstOddNaturalNumbers(n-1);

    printf("%d ",n*2-1);
    return;
}
