// swap values of two int variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 5,b = 15;
    printf("\na = %d, b = %d",a,b);
    getch();
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\na = %d, b = %d",a,b);
    getch();
}