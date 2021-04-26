#include<stdio.h>

int printSumFirstOddNaturalNumbers(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printf("Sum of first %d odd numbers is %d",n,printSumFirstOddNaturalNumbers(n));

}

int printSumFirstOddNaturalNumbers(int n){

    if(n==0){
        return 0;
    }

    return n*2-1+printSumFirstOddNaturalNumbers(n-1);
}

