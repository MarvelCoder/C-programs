#include<stdio.h>
#include<string.h>

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    printf("%s",strrev(str));

}

