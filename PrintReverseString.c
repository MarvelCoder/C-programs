#include<stdio.h>

void reversestring(char []);

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    reversestring(str);

    printf("%s",str);

}

void reversestring(char str[]){

    int length=0;
    char temp;

    for(int i=0;str[i];i++)length++;

    for(int i=length-1,j=0;j<length/2;i--,j++){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}



