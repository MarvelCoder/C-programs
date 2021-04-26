#include<stdio.h>

void input(int []);
int findGreatest(int []);

void main(){

    int a[10];

    input(a);

    printf("The greatest number in the array is %d",findGreatest(a));

}

void input(int A[]){

    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
        scanf("%d",&A[i]);

}

int findGreatest(int B[]){

    int temp=0;
    for(int i=0;i<10;i++){
        if(temp<B[i])temp=B[i];
    }

    return temp;
}
