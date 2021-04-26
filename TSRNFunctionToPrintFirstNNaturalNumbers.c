#include<stdio.h>

void printNaturalNumbers(int n);

void main(){

    int n;

    printf("Enter value of N ");
    scanf("%d",&n);

    printNaturalNumbers(n);
}

void printNaturalNumbers(int N){

    for(int i=1;i<=N;i++){
        printf("%d",i);
    }

}
