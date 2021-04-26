#include<stdio.h>

float calculateCircumferenceOfCircle(float);

void main(){

    float radius;

    printf("Enter radius of circle ");
    scanf("%f",&radius);

    printf("Circumference of a circle %f",calculateCircumferenceOfCircle(radius));
}

float calculateCircumferenceOfCircle(float radius){

    return 2*3.14*radius;
}
