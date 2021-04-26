#include<stdio.h>
#include<string.h>

int IsAlphanumeric(char []);

void main(){

    char s[20];
    printf("Enter String - ");
    gets(s);

    if(IsAlphanumeric(s))
        printf("%s is Alphanumeric",s);
    else
        printf("%s is Not Alphanumeric",s);
}

int IsAlphanumeric(char s[]){

    int wcount=0,ncount=0;

    for(int i=0;s[i];i++){
        if(s[i]>=48 && s[i]<=57)
            ncount++;
        else if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
            wcount++;
    }

    if(wcount>0 && ncount>0)
        return 1;
    else
        return 0;
}
