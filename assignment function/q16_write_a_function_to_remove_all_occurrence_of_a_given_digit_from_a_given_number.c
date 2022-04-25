// function to remove all the occurrence of a given digit from a given number
#include <stdio.h>
#include <conio.h>
int remove_digits(int num, int digit);
int main()
{
    int n, m;
    printf("\nenter a number : ");
    scanf("%d", &n);
    printf("enter a digit to remove : ");
    scanf("%d", &m);
    printf("\nnumber after remove %d = %d",m,remove_digits(n,m));
    getch();
}
int remove_digits(int num, int digit)
{
    int b = 0, sum = 0, t;
    t = num;
    while (1)
    {
        if (t % 10 != digit)
        {
            sum += t % 10;
            sum *= 10;
        }
        t /= 10;
        if (t <= 10)
        {
            sum += t;
            break;
        }
    }
    while (1)
    {
        b += sum%10;
        b *= 10;
        sum /= 10;
        if (sum<=10)
        {
            b += sum;
            break;
        }
    }
    return b;
}