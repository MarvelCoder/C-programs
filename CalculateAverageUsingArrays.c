#include<stdio.h>

void input(int []);
float avg(int []);

void main(){

    int a[10];

    input(a);

    printf("The average of 10 numbers is %f",avg(a));
}

void input(int A[]){

    printf("Please enter 10 numbers\n");
    for(int i=0;i<10;i++){
        scanf("%d",&A[i]);
    }

}

float avg(int B[]){

    int result=0;
    for(int i=0;i<10;i++){
        result+=B[i];
    }

    return result/10.0;
}
