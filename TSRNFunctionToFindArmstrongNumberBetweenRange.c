#include<stdio.h>

void findArmstrongNumber(int,int);

void main(){

    int N1,N2;

    printf("Please enter 2 numbers");
    scanf("%d%d",&N1,&N2);

    findArmstrongNumber(N1,N2);
}

void findArmstrongNumber(int n1,int n2){

    int x,y,z,result=0;

    for(x=n1+1;x<n2;x++){
        for(z=x;z>0;){
            y=z%10;
            z=z/10;
            result+=y*y*y;
        }
        if(result==x)printf("%d\n",result);
        result=0;
    }
}
