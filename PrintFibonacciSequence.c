#include<stdio.h>

void printFib(int,int,int);

int main(){

    int len,a=0,b=1;

    printf("Enter the length of fibonacci sequence - ");
    scanf("%d",&len);

    printf("%d ",a);
    len--;

    printf("%d ",b);
    len--;

    printFib(a+b,b,len);
}

void printFib(int c,int d,int length){

    if(length==0)
        return 0;

    printf("%d ",c);
    length--;

    return printFib(c+d,c,length);
}
