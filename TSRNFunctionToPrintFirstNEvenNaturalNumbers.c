#include<stdio.h>

void printFirstEvenNaturalNumbers(int);

void main(){

    int n;

    printf("Enter value of N");
    scanf("%d",&n);

    printFirstEvenNaturalNumbers(n);
}

void printFirstEvenNaturalNumbers(int n){

    for(int i=1;n>0;i++){
        if(i%2==0){
            printf("%d ",i);
            --n;
        }
    }
}
