#include<stdio.h>

void input(int [][3],int [][3]);
void calculateSum(int [][3],int [][3]);

void main(){

    int A[3][3],B[3][3];

    input(A,B);
    calculateSum(A,B);
}

void input(int a[][3],int b[][3]){

    printf("Please enter elements in both Arrays as space seperated\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            scanf("%d",&b[i][j]);
        }
    }
}

void calculateSum(int a[][3],int b[][3]){

    int result=0;

    printf("Sum of matrices is\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
