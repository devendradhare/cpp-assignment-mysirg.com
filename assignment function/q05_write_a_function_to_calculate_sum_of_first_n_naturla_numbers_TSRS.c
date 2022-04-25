// function to calculate sum of first n naturl number
#include <stdio.h>
#include <conio.h>
int sum_n_natural_num(int);
int main()
{
    int n, sum;
    printf("\nsum of first n natural numbers\nenter value of n : ");
    scanf("%d", &n);
    sum = sum_n_natural_num(n);
    printf("\nsum = %d", sum);
    getch();
}
int sum_n_natural_num(int n)
{
    int i, sum = 0;
    for(i = 1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}