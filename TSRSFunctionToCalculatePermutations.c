#include<stdio.h>

int calculatePermutations(int,int);

void main(){

    int n,r;

    printf("Please enter n and r");
    scanf("%d%d",&n,&r);

    printf("Number of permutations can be %d",calculatePermutations(n,r));

}

int calculatePermutations(int n,int r){

    int x=1,y=1;

    for(int i=n;i>0;i--){
        x*=i;
    }

    for(int i=n-r;i>0;i--){
        y*=i;
    }

    return x/y;
}
