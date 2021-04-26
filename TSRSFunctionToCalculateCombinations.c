#include<stdio.h>

int calculateCombinations(int,int);

void main(){

    int n,r;

    printf("Please enter n and r");
    scanf("%d%d",&n,&r);

    printf("Number of combinations can be %d",calculateCombinations(n,r));

}

int calculateCombinations(int n,int r){

    int x=1,y=1,z=1;

    for(int i=n;i>0;i--){
        x*=i;
    }

    for(int i=n-r;i>0;i--){
        y*=i;
    }

    for(int i=r;i>0;i--){
        z*=i;
    }

    return x/(z*y);
}

