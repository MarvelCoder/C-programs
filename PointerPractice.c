#include<stdio.h>

void main(){

    int x=5;

    printf("Value stored in x is %d\n",x);
    printf("Address of x is %d\n",&x);
    printf("*&x gives %d\n",*&x);

    int a[5] = {0,1,2,3,4};

    printf("Address of Array's first index is %d\n",&a[0]);
    printf("Address of Array's first index is %d\n",&a[1]);
    printf("Address of Array's first index is %d\n",&a[2]);
    printf("Address of Array's first index is %d\n",&a[3]);
    printf("Address of Array's first index is %d\n",&a[4]);

    int b=6;
    int *p;
    p=&b;
    printf("Address of b is %d\n",&b);
    printf("Address of p is %d\n",&p);
    printf("*p gives %d\n",*p);

}
