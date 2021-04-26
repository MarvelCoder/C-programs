#include<stdio.h>

int calculateSumFirstNaturalNumbers(int);

void main(){

    int n;

    printf("Enter the value of N ");
    scanf("%d",&n);

    printf("Sum of first %d natural numbers is %d",n,calculateSumFirstNaturalNumbers(n));

}

int calculateSumFirstNaturalNumbers(int N){

    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum;
}
