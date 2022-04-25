// write a function to check whether a given number is prime or not
#include <stdio.h>
#include <conio.h>
int check_prime(int n);
int main()
{
    int n, p;
    printf("\nenter a number to check the number is prime or not : ");
    scanf("%d", &n);
    p = check_prime(n);
    if (p == 1)
        printf("\n%d is a prime number", n);
    else
        printf("\n%d is not a prime number", n);
    getch();
}
int check_prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i >= n / 2)
        return 1;
    else
        return 0;
}