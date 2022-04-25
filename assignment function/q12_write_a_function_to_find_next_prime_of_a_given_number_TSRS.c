// function to find next prime number of given number
#include <stdio.h>
#include <conio.h>
int next_prime(int);
int main()
{
    int n, np;
    printf("\nnext prime number of : ");
    scanf("%d", &n);
    np = next_prime(n);
    printf("\nnext prime number = %d", np);
    getch();
}
int next_prime(int n)
{
    int i=n+1, j;
    while (1)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                break;
        if (j >= i)
            break;
        else
            i++;
    }
    return i;
}