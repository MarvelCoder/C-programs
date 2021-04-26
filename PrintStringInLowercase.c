#include<stdio.h>

void tolowercasestring(char []);

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    tolowercasestring(str);

    printf("%s",str);

}

void tolowercasestring(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]!=' ')
            str[i]+=32;
    }
}


