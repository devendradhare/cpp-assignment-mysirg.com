// simple interest calculater
#include<stdio.h>
#include<conio.h>
int main()
{
    float t,r,p,si;
    printf("\nsimple interest calculater\nenter initial balance : ");
    scanf("%f",&p);
    printf("\nenter annual interest rate : ");
    scanf("%f",&r);
    printf("\nenter time (in year) : ");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("\nsimple interest = %.2f",si);
    getch();
}