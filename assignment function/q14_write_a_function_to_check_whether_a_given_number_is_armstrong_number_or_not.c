// function to check whether a given number is armstrong or not
// ex: 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153, 370 ,371, 407, 1634, 8208, 9474, 54748 92727 93084 etc
#include <stdio.h>
#include <conio.h>
int armstrong(int n);
int main()
{
    int r, n;
    printf("\ncheck number is armstrong or not\nenter a number : ");
    scanf("%d", &n);
    r = armstrong(n);
    if (r == 1)
        printf("\n%d is an armstrong number\n\n", n);
    else
        printf("\n%d is not an armstrong number\n\n", n);
}
int armstrong(int n)
{
    int i, t, a = n, l = 0, arm = 0, armloop = 1;
    while (a > 0)
    {
        a = a / 10;
        l++;
    }
    a = n;
    while (n > 0)
    {
        armloop = 1;
        t = n % 10;
        n /= 10;
        for (i = 1; i <= l; i++)
            armloop *= t;
        arm += armloop;
    }
    if (arm == a)
        return 1;
    else
        return 0;
}