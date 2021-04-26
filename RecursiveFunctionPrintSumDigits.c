#include<stdio.h>

int printSumDigits(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printf("Digits sum of %d is %d",n,printSumDigits(n));

}

int printSumDigits(int n){

    if(n==0){
        return 0;
    }

    return n%10+printSumDigits(n/10);
}
