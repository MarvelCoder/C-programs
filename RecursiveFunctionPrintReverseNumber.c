#include<stdio.h>

void printReverseDigits(int);

void main(){

    int n;

    printf("Enter a number");
    scanf("%d",&n);

    printReverseDigits(n);

}

void printReverseDigits(int n){

    if(n==0){
        return;
    }

    printf("%d",n%10);

    printReverseDigits(n/10);

    return;
}

