#include<stdio.h>
int main(){

    int n,i=1,sum=0;

    printf("Enter a number");
    scanf("%d",&n);

    n*=2;

    while(i<=n){
        if(i!=i/2*2){
            sum+=i;
        }
        i++;
    }
    printf("Sum of %d odd natural numbers is %d",n,sum);
    return 0;
}

