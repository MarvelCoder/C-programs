#include<stdio.h>
int main(){

    int x,y,z,sum=0;

    printf("Enter a number");
    scanf("%d",&x);

    do{
        y=x%10;
        z=x/10;
        sum+=y;
        x=z;
    }
    while(x>0);

    printf("Sum of digits is %d",sum);
    return 0;
}
