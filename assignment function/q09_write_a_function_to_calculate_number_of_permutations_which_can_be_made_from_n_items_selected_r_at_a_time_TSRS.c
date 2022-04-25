// function to calculate number of permutations which can be made from n item selected r at a time
#include <stdio.h>
#include <conio.h>
int permutation(int, int);
int main()
{
    int n, r, p;
    asdf:
    printf("\ncalculate pemutation \nenter number of items n : ");
    scanf("%d", &n);
    printf("enter selected items r : ");
    scanf("%d", &r);
    if (r >= n)
    {
        printf("\n\nplease enter n >= r >= 0\n");
        goto asdf;
    }
    else
    {
        p = permutation(n, r);
        printf("\nnumber of permutation = %d", p);
    }
    getch();
}
int permutation(int n, int r)
{
    int i, fn = 1, fnr = 1;
    for (i = n; i >= 1; i--)
    {
        fn *= i;
    }
    printf("\nfn = %d", fn);
    for (i = n - r; i >= 1; i--)
    {
        fnr *= i;
    }
    printf("\nfnr = %d", fnr);
    i = fn / fnr;
    printf("\ni = %d", i);
    return i;
}