#include<stdio.h>

void input(int []);
void sum(int []);

void main(){

    int a[10];

    input(a);

    sum(a);
}

void input(int A[]){

    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
        scanf("%d",&A[i]);

}

void sum(int B[]){

    int evensum=0,oddsum=0;

    for(int i=0;i<10;i++){
        if(i%2==0)evensum+=B[i];
        else oddsum+=B[i];
    }

    printf("Sum of even numbers is %d and Sum of odd numbers is %d",evensum,oddsum);


}
