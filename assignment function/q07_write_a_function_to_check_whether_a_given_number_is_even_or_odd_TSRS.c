// function to check whether a given number is even or odd 
// return 1 if even otherwise return 0
#include<stdio.h>
#include<conio.h>
int even_or_odd(int n);
int main()
{
    int n,a;
    printf("\ncheck number is even or odd\nenter a number : ");
    scanf("%d",&n);
    a = even_or_odd(n);
    if (a==1)
    {
        printf("\n%d is an even number",n);
    }
    else
    {
        printf("\n%d is an odd number",n);  
    }
    getch();
}
int even_or_odd(int n)
{
    if (n%2)
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}