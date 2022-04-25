// function to print all armstrong number in given range
// ex: 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153, 370 ,371, 407, 1634, 8208, 9474, 54748 92727 93084 etc
#include <stdio.h>
#include <conio.h>
int armstrong_in_range(int n);
int main()
{
    int n;
    printf("\narmstrong number\nenter a range to print armstrong number : ");
    scanf("%d", &n);
    armstrong_in_range(n);
    getch();
}
int armstrong_in_range(int n)
{
    int i, j, t, a, l, arm, armloop;
    for (j = 1; j <= n; j++)
    {
        a = j;
        l = 0;
        arm = 0;
        while (a > 0)
        {
            a = a / 10;
            l++;
        }
        a = j;
        // printf("\n              length = %d", l);
        while (j > 0)
        {
            armloop = 1;
            t = j % 10;
            j /= 10;
            for (i = 1; i <= l; i++)
                armloop *= t;
            arm += armloop;
        }
        j = a;
        if (arm == j)
        {
            printf("\n%d", j);
        }
    }
    printf("\nend");
}