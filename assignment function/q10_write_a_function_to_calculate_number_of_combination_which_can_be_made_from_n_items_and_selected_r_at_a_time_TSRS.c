// program to calculate number of combination which can be made from n items and selected r at a time
#include <stdio.h>
#include <conio.h>
int combination(int n, int r);
int main()
{
    int n, r, c;
    printf("\ncalculat combination\nenter number of items n : ");
    scanf("\n%d", &n);
    printf("\nenter selected item r : ");
    scanf("\n%d", &r);
    c = combination(n, r);
    printf("\nnumber of combination = %d", c);
    getch();
}
int combination(int n, int r)
{
    int i, fn = 1, fr = 1, fnr = 1;
    for (i = n; i >= 1; i--)
    {
        fn *= i;
    }
    printf("\n fn = %d",fn);

    for (i = r; i >= 1; i--)
    {
        fr *= i;
    }
    printf("\n fr = %d",fr);
    for (i = n - r; i >= 1; i--)
    {
        fnr *= i;
    }
    printf("\n fnr = %d",fnr);
    i = (fn) / (fr * fnr);
    return i;
}