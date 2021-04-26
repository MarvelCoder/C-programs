main(){

 int n,result=1;

 printf("Enter a number - ");
 scanf("%d",&n);

 do{
    result = result*n;
    n--;
 }
 while(n>=1);

    printf("Factorial of is %d",result);

}
