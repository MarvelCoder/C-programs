#include<stdio.h>

int checkArmstrongNumber(int);

void main(){

    int N;

    printf("Please enter a number");
    scanf("%d",&N);

    if(checkArmstrongNumber(N))printf("%d is Armstrong number",N);
    else printf("%d is NOT Armstrong number",N);
}

int checkArmstrongNumber(int n){

    int x=n,y,result=0;

    for(int i=1;n>0;i++){
        y=n%10;
        n=n/10;
        result+=y*y*y;
    }

    if(result==x)return 1;
    else return 0;
}
