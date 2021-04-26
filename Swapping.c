
#include<stdio.h>
int main(){

    int x=56,y=40,z;

    z=x;
    x=y;
    y=z;

    printf("x=%2d y=%2d",x,y);
    return 0;
}
