#include<stdio.h>

int printSumSquaresFirstNaturalNumbers(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printf("Sum of squares first %d numbers is %d",n,printSumSquaresFirstNaturalNumbers(n));

}

int printSumSquaresFirstNaturalNumbers(int n){

    if(n==0){
        return 0;
    }

    return n*n+printSumSquaresFirstNaturalNumbers(n-1);
}
