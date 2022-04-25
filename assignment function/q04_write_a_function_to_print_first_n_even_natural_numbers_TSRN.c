// function to print first n even natural numbers
#include<stdio.h>
#include<conio.h>
int n_even_num(int);
int main()
{
    int n;
    printf("\nprint first n even natural numbers\nenter value of n : ");
    scanf("%d",&n);
    n_even_num(n);
    getch();
}
int n_even_num(int n)
{
    int i;
    for(i = 1;i<=n;i++)
    {
        printf("\n%d",i*2);
    }
}