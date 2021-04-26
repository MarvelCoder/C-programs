#include<stdio.h>

int getcharacterfirstoccurance(char [], char);

void main(){

    char str[20],ch;
    int count=0;

    printf("Enter string - ");
    gets(str);

    printf("Enter character - ");
    scanf("%c",&ch);

    printf("\n%s has character %c first occurrance at %d\n",str,ch,getcharacterfirstoccurance(str,ch));
}

int getcharacterfirstoccurance(char str[],char ch){

    int count=0;

    for(int i=0;str[i];++i){
        if(str[i]==ch)return i;
    }
}


