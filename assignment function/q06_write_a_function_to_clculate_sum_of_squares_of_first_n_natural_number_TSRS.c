// function to calculate sum of squares of first n natural numbers
#include<stdio.h>
#include<conio.h>
int sum_n_squares(int n);
int main()
{
    int n,sum;
    printf("\nsum of squares of first n natural numbers\nenter value of n :");
    scanf("%d",&n);
    sum = sum_n_squares(n);
    printf("\nsum = %d",sum);
    getch();
}
int sum_n_squares(int n)
{
    int i,sum = 0;
    for(i = 1;i<=n;i++)
    {
        sum += i*i;
    }
    return sum;
}