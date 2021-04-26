#include<stdio.h>

void printNaturalNumber(int);

void main(){

    int n;

    printf("Enter number");
    scanf("%d",&n);

    printNaturalNumber(n);
}

void printNaturalNumber(int N){

    if(N==1){
        printf("1 ");
        return;
    }
    printNaturalNumber(N-1);
    printf("%d ",N);
}
