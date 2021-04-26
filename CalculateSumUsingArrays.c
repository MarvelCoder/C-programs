#include<stdio.h>

void input(int []);
int sum(int []);

void main(){

    int a[10];

    input(a);

    printf("Sum of 10 numbers is %d",sum(a));
}

void input(int A[]){

    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
        scanf("%d",&A[i]);

}

int sum(int B[]){

    int result=0;

    for(int i=0;i<10;i++){
        result+=B[i];
    }

    return result;
}
