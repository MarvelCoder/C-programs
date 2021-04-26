#include<stdio.h>

void input(int []);
void reverse(int []);
void print(int []);

int size;

void main(){

    printf("Enter the size");
    scanf("%d",&size);

    int a[size];

    input(a);
    reverse(a);
    print(a);

}

void input(int A[]){

    printf("Enter Numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

void reverse(int B[]){

    int temp;

    for(int i=0,j=size-1;i<size/2;i++,j--){
        temp = B[i];
        B[i] = B[j];
        B[j] = temp;
    }
}

void print(int C[]){

    printf("After Reversing\n");
    for(int i=0;i<size;i++){
        printf("%d\n",C[i]);
    }

}
