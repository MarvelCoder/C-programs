#include<stdio.h>

void input(int []);
void rotate(int []);
void print(int []);

int size;

void main(){

    printf("Enter Size of array");
    scanf("%d",&size);
    int a[size];

    input(a);
    rotate(a);
    print(a);
}

void input(int A[]){

    printf("Enter numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

void rotate(int B[]){

    int temp;
    temp = B[size-1];
    for(int i=size-1;i>0;i--)
        B[i] = B[i-1];
    B[0] = temp;
}

void print(int C[]){

    for(int i=0;i<size;i++){
        printf("%d ",C[i]);
    }
}
