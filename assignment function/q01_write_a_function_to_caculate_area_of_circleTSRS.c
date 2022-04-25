// function to calculate area of circle
#include<stdio.h>
#include<conio.h>
float area_of_circle(float);
int main()
{
    float r;
    printf("\ncalculate area of circle \nenter radius of the circle : ");
    scanf("%f",&r);
    r = area_of_circle(r);
    printf("\narea of the circle = %f",r);
    getch();
}
float area_of_circle(float r)
{
    r = (22/7.0)*r*r*1.0;
    return r;
}