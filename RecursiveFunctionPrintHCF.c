#include<stdio.h>

void printHCF(int,int);

void main(){

    int n1,n2;

    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);

    printHCF(n1,n2);
}

void printHCF(int n1,int n2){

    if(n2%n1==0){
        printf("%d",n1);
        return;
    }

    printHCF(n2%n1,n1);

    return;
}
