#include<stdio.h>

void input(int []);
int findSmallest(int []);

void main(){

    int a[10];

    input(a);

    printf("The smallest number in the array is %d",findSmallest(a));

}

void input(int A[]){

    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
        scanf("%d",&A[i]);

}

int findSmallest(int B[]){

    int temp;
    for(int i=0;i<10;i++){
        if(temp>B[i])temp=B[i];
    }

    return temp;
}

