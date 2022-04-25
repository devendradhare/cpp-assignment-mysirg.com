// function to print n natural numbers
#include<stdio.h>
#include<conio.h>
int printNnatural(int n);
int main()
{
    int n;
    printf("\nprint n naturl number\nenter value of n : ");
    scanf("%d",&n);
    printNnatural(n);
    getch();
}
int printNnatural(int n)
{
    int i;
    for(i = 1;i<=n;i++)
    {
        printf(" %d ",i);
    }
}