// function to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
    int n,facto;
    printf("\nfactorial of ");
    scanf("%d",&n);
    facto = factorial(n);
    printf("is %d",facto);
    getch();
}
int factorial(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
    {
        f *= i;
    }
    return f;
}