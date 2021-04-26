#include<stdio.h>
#include<string.h>

int strlen(char []);

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    printf("%s length is %d",str,strlen(str));

}
