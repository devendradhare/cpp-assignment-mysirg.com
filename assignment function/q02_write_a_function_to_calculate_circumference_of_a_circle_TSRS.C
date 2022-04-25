// calculate circumference of a circle
#include<stdio.h>
#include<conio.h>
float circumference_of_circle(float a);
int main()
{
    float r;
    printf("\ncalculate circumference of a circle\nenter radius of circle : ");
    scanf("%f",&r);
    r = circumference_of_circle(r);
    printf("\ncircumference of the circle = %f",r);
    getch();
}
float circumference_of_circle(float a)
{
    a = 2.0*(22/7.0)*a;
    return a;
}