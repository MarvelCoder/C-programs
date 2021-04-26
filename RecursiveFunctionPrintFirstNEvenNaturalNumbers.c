#include<stdio.h>

void printFirstEvenNaturalNumbers(int);

void main(){

    int n;

    printf("Enter number");
    scanf("%d",&n);

    printFirstEvenNaturalNumbers(n);
}

void printFirstEvenNaturalNumbers(int n){

    if(n==0)return;

    printFirstEvenNaturalNumbers(n-1);

    printf("%d ",n*2);
    return;
}
