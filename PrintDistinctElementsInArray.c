#include<stdio.h>

void input(int []);
void printDistinctElement(int []);

int size;

void main(){

    printf("Enter size");
    scanf("%d",&size);

    int a[size];

    input(a);
    printDistinctElement(a);

}

void input(int A[]){

    printf("Enter Numbers\n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
}

void printDistinctElement(int B[]){

    int count=0;

    printf("Distinct Elements are \n");

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(B[i]==B[j])
            {
                count++;
                if(count>1){
                    break;
                }
            }
        }
        if(count==1){
            printf("%d ",B[i]);
        }
    count=0;
    }
}

