#include<stdio.h>

void printSumFirstNaturalNumbers(int [],int);

int size;

void main(){

    printf("Enter a number");
    scanf("%d",&size);

    int a[size];

    printSumFirstNaturalNumbers(a,size);

}

void printSumFirstNaturalNumbers(int A[],int n){

    A[n-1]=n;

    if(n==1){
        int temp=0;
        for(int i=0;i<size;i++){
            temp+=A[i];
        }
        printf("Sum is %d",temp);
        return;
    }

    printSumFirstNaturalNumbers(A,n-1);
}
