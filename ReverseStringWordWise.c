
#include<stdio.h>

void reversestring(char []);

void main(){

    char str[25];

    printf("Enter string - ");
    gets(str);

    reversestring(str);

    printf("%s",str);

}

void reversestring(char str[]){

    int length=0,start=0,space=-1;
    char temp;

    for(int i=0;str[i];i++)length++;

    for(int j=0;j<=length;j++){
        if(str[j]==' ' || str[j]=='\0'){
            for(int k=start,l=j-1;k<(start+j)/2;k++,l--){
                temp=str[k];
                str[k]=str[l];
                str[l]=temp;
            }
            start=j+1;
        }
    }
}
