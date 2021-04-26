#include<stdio.h>

int main(){

 float p,r;
 int t;

 printf("Please enter the Principal =");
 scanf("%f",&p);
 printf("Please enter the rate =");
 scanf("%f",&r);
 printf("Please enter the time =");
 scanf("%d",&t);
 printf("Simple Interest = %0.2f",p*r/100*t);
    
return 0;
}
