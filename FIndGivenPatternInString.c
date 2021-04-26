#include<stdio.h>

int findpattern(char [], char []);

void main(){

    char str[10],ptn[2];

    printf("Enter string - ");
    gets(str);

    printf("Enter pattern - ");
    gets(ptn);

    int result = findpattern(str,ptn);

    if(result)
        printf("%s pattern exists in %s",ptn,str);
    else
        printf("%s pattern doesn't exists in %s",ptn,str);

}

int findpattern(char s1[],char ptn1[]){

    int length=0;

    for(int i=0;ptn1[i];i++)length++;

    for(int i=0,j=0;s1[i];i++){
        if(s1[i]==ptn1[j]){
            j++;
            if(j==length)return 1;
        }else{
            j=0;
        }
    }

    return 0;
}
