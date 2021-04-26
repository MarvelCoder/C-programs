#include<stdio.h>
#include<string.h>

int getWordCount(char []);

void main(){

    char s[20];
    printf("Enter String - ");
    gets(s);

    printf("Word count in %s is %d",s,getWordCount(s));
}

int getWordCount(char s[]){

    int count=0;
    for(int i=0;s[i];i++)
        if(s[i]!=' ')count++;

    return count;
}

