#include<stdio.h>

int printarray(int[],int,int);

int main(){

    int s=5;
    int A[5] = {1,2,3,4,5};
    int i=0;

    return printarray(A,i,s);
}

int printarray(int B[],int index,int size){

    if(index==size)
        return 0;

    printf("%d ",B[index]);

    return printarray(B,++index,size);

}
