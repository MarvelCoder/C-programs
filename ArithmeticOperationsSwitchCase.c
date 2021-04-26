main(){

 int x,a,b;

 while(1){
        system("cls");
   printf("Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 for Exit\n");
   scanf("%d",&x);

     switch(x){
        case 1:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Addition is %d",a+b);
            break;
        case 2:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Subtraction is %d",b-a);
            break;
        case 3:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Multiplication is %d",a*b);
            break;
        case 4:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Division is %d",b/a);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice entered.");
            break;
     }
     getch();
 }
}
