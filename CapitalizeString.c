#include<stdio.h>

void touppercasestring(char []);

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    touppercasestring(str);

    printf("%s",str);

}

void touppercasestring(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]!=' ')
            str[i]-=32;
    }
}

