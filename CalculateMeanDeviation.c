#include<stdio.h>

void input(int []);
float calculateMeanDeviation(int []);

int size;

void main(){

    printf("Enter the size");
    scanf("%d",&size);

    int a[size];

    input(a);
    printf("The mean deviation is %f",calculateMeanDeviation(a));
}

void input(int A[]){

    printf("Enter Numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

float calculateMeanDeviation(int A[]){

    int mean;
    float result=0.00;

    for(int i=0;i<size;i++){
        result += A[i];
    }

    mean = result/size;

    result=0;

    for(int i=0;i<size;i++){
        if(A[i] > mean)result+=(A[i]-mean);
        else result+=(mean - A[i]);
    }

    return result/size;

}
