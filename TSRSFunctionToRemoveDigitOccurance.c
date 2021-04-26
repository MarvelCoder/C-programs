#include<stdio.h>

int removeDigitOcccurance(int,int);

void main(){

    int N1, N2;
    printf("Enter number and digit to remove ");
    scanf("%d%d",&N1,&N2);

    printf("Number after removing %d is %d",N1,removeDigitOcccurance(N1,N2));
}

int removeDigitOcccurance(int n1,int n2){

    int i,j,z,result=0;

    for(i=n1,z=1;i>0;){
        j=i%10;
        i=i/10;
        if(j!=n2){
            result+=j*z;
            z=z*10;
        }
    }

    return result;
}
