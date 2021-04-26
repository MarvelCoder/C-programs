#include<stdio.h>

void countvowels(char [][10]);

void main(){

    char str[8][10];

    printf("Enter 8 Strings\n");

    for(int i=0;i<8;i++)gets(str[i]);

    countvowels(str);
}

void countvowels(char str[][10]){

    int count=0,totalcount=0;

    for(int i=0;i<8;i++){
        for(int j=0;str[i][j];j++){
            if(str[i][j]=='a'||str[i][j]=='e'|| str[i][j]=='i'|| str[i][j]=='o'|| str[i][j]=='u'|| str[i][j]=='A'|| str[i][j]=='E'|| str[i][j]=='I'|| str[i][j]=='O'|| str[i][j]=='U'){
                count++;
            }
        }
        printf("Count of vowels in %s is %d\n",str[i],count);
        totalcount+=count;
        count=0;
    }

    printf("Total vowels are %d\n",totalcount);
}
