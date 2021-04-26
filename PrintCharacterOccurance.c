#include<stdio.h>

int getcharacteroccurance(char [], char);

void main(){

    char str[20],ch;
    int count=0;

    printf("Enter string - ");
    gets(str);

    printf("Enter character - ");
    scanf("%c",&ch);

    printf("\n%s has character %c repeated %d times",str,ch,getcharacteroccurance(str,ch));
}

int getcharacteroccurance(char str[],char ch){

    int count=0;

    for(int i=0;str[i];++i){
        if(str[i]==ch)count++;
    }

    return count;
}
