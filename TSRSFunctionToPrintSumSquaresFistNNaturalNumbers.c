#include<stdio.h>

int calculateSumSquaresFirstNaturalNumbers(int);

void main(){

    int n;

    printf("Enter the value of N ");
    scanf("%d",&n);

    printf("Sum of squares first %d natural numbers is %d",n,calculateSumSquaresFirstNaturalNumbers(n));

}

int calculateSumSquaresFirstNaturalNumbers(int N){

    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i*i;
    }
    return sum;
}
