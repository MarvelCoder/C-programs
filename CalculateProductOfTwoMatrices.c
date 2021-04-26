#include<stdio.h>

void input(int [][3],int [][3]);
void calculateProduct(int [][3],int [][3]);

void main(){

    int A[3][3],B[3][3];

    input(A,B);
    calculateProduct(A,B);
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

void calculateProduct(int a[][3],int b[][3]){

    int result=0;

    printf("Product of matrices is\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                result +=a[i][k]*b[k][j];
            }
            printf("%d ",result);
            result=0;
        }
        printf("\n");
        result=0;
    }
}
