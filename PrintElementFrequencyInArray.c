#include<stdio.h>

void input(int []);
void printElementFrequency(int []);

int size;

void main(){

    printf("Enter size");
    scanf("%d",&size);

    int a[size];

    input(a);
    printElementFrequency(a);

}

void input(int A[]){

    printf("Enter Numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

void printElementFrequency(int B[]){

    int count=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(B[i]==B[j])
            {
                count++;
            }
        }
        printf("Element is %d and frequency is %d\n",B[i],count);
        count=0;
    }
}


