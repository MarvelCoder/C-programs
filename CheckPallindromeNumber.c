#include<stdio.h>

int checkPallindromeNumber(int,int);

int main(){

    int num;
    printf("Enter Number -> ");
    scanf("%d",&num);

    if(checkPallindromeNumber(num,getHighestBase(num))==num)
        printf("Number is pallindrome number");
    else
        printf("Number is NOT pallindrome number");
}

int checkPallindromeNumber(int n,int p){
    int q;

    if(n<10)
        return n*p;

    q=n/10;
    n%=10;

    return n*p+checkPallindromeNumber(q,p/10);
}

int getHighestBase(int n){

    int i,pow=1;

    for(i=0;n>10;i++){
        n/=10;
    }

    while(i>0){
        pow*=10;
        i--;
    }

    return pow;
}
