#include<stdio.h>

float calculateAreaOfCircle(float);

void main(){

    float radius,area;

    printf("Enter radius of circle ");
    scanf("%f",&radius);

    area = calculateAreaOfCircle(radius);

    printf("Area of circle is %f",area);
}

float calculateAreaOfCircle(float radius){

    return 3.14*radius*radius;

}
