#include<stdio.h>

int printSumFirstEvenNaturalNumbers(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printf("Sum of first %d even numbers is %d",n,printSumFirstEvenNaturalNumbers(n));

}

int printSumFirstEvenNaturalNumbers(int n){

    if(n==0){
        return 0;
    }

    return n*2+printSumFirstEvenNaturalNumbers(n-1);
}
