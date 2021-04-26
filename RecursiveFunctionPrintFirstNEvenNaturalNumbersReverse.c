#include<stdio.h>

void printFirstEvenNaturalNumbersReverse(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printFirstEvenNaturalNumbersReverse(n);

}

void printFirstEvenNaturalNumbersReverse(int n){

    if(n==0) return;

    printf("%d ",n*2);

    printFirstEvenNaturalNumbersReverse(n-1);
    return;
}
