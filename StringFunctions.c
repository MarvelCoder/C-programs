#include<stdio.h>
#include<stdio.h>
#include<string.h>

void main(){

    char s1[20],s2[20],s3[20];
    printf("Enter String 1 - ");
    gets(s1);
    printf("Enter String 2 - ");
    gets(s2);

    printf("comparing %s and %s returns %d\n",s1,s2,strcmp(s1,s2));
    printf("%s length is %d\n",s1,strlen(s1));
    printf("Gurgaon length is %d\n",strlen("Gurgaon"));
    printf("lowercase is %s\n",strlwr(s1)); //strlwr not accepting string input, but accepting character input
    printf("uppercase is %s\n",strupr(s2)); //strupr not accepting string input, but accepting character input
    printf("reverse string is %s\n",strrev(s2));//strrev not accepting string input, but accepting character input
    printf("After copying %s\n",strcpy(s3,"Morpheus"));
    printf("After concatenation %s\n",strcat(s1,s3)); //strcat not accepting string input, but accepting character input
    return 0;
}
