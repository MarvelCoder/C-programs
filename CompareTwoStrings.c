#include<stdio.h>
#include<string.h>

int comparestring(char [],char []);

void main(){

    char s1[20],s2[20];
    printf("Enter String 1 - ");
    gets(s1);
    printf("Enter String 2 - ");
    gets(s2);

    if(comparestring(s1,s2))printf("Both strings are identical");
    else printf("Both strings are NOT identical");
}

int comparestring(char s1[],char s2[]){

    int length1=0;
    int length2=0;

    for(int i=0;s1[i];i++)length1++;
    for(int i=0;s2[i];i++)length2++;

    if(length1 == length2){
        for(int i=0;s1[i];i++){
            if(s1[i]>=65 && s1[i]<=90){
                s1[i]+=32;
            }else if(s2[i]>=65 && s2[i]<=90){
                s2[i]+=32;
            }
            if(s1[i]!=s2[i]){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
