#include<stdio.h>

void printNNaturalNumbersReverse(int);

void main(){

    int n;
    printf("Enter number");
    scanf("%d",&n);

    printNNaturalNumbersReverse(n);

}

void printNNaturalNumbersReverse(int n){

    if(n==1){
        printf("1 ");
        return;
    }

    printf("%d ",n);
    printNNaturalNumbersReverse(n-1);
}
