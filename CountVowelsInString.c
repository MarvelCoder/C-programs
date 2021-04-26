#include<stdio.h>
#include<string.h>

int getvowels(char []);

void main(){

    char s[20];
    printf("Enter String - ");
    gets(s);

    printf("Vowels in %s are %d",s,getvowels(s));
}

int getvowels(char s[]){

    int count=0;
    for(int i=0;s[i];i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')count++;

    return count;
}
