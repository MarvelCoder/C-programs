#include<stdio.h>

void input(int []);
void printSmallestElementIndex(int []);

int size;

void main(){

    printf("Enter size");
    scanf("%d",&size);

    int a[size];

    input(a);
    printSmallestElementIndex(a);

}

void input(int A[]){

    printf("Enter Numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

void printSmallestElementIndex(int B[]){

    int temp;

    for(int i=0;i<size-1;i++){
        if(B[i]<temp)temp=i;
    }

    printf("Smallest Element is at Index %d",temp);
}
