#include<stdio.h>
int main(){

    int n,i=1,sum=0;

    printf("Enter a number");
    scanf("%d",&n);


    do{
        sum=sum+i*i;
        ++i;
    }
    while(i<=n);

    printf("Sum of squares of first N natural numbers is %d",sum);
    return 0;
}

