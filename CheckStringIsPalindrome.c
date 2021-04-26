#include<stdio.h>
#include<string.h>

int IsPalindrome(char []);

void main(){

    char s[20];
    printf("Enter String - ");
    gets(s);

    if(IsPalindrome(s))
        printf("%s is Palindrome",s);
    else
        printf("%s is Not Palindrome",s);
}

int IsPalindrome(char s[]){

    int length=0;

    for(int i=0;s[i];i++)length++;

    for(int i=0,j=length-1;i<length/2;i++,j--)
        if(s[i]!=s[j])
            return 0;

    return 1;
}


