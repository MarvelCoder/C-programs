#include<stdio.h>

int getstringlength(char []);

void main(){

    char str[20];

    printf("Enter string - ");
    gets(str);

    printf("%s length is %d",str,getstringlength(str));

}

int getstringlength(char str[]){

    int count=0;

    for(int i=0;str[i];i++){
        count++;
    }

    return count;
}
