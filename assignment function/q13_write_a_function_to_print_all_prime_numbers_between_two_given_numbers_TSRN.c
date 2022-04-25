// function to print all the prime numbers between tow given number
#include<stdio.h>
#include<conio.h>
int prime_between(int a,int b);
int main()
{
    int a,b;
    printf("\nall prime numbers between tow number \nenter tow numbers : ");
    scanf("%d%d",&a,&b);
    prime_between(a,b);
    getch();
}
int prime_between(int a,int b)
{
    int i,j;
    if (a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i = a;i <= b;i++)
    {
        for(j = 2;j <= i;j++)
            if(i%j==0)
                break;
        if(j>=i)
            printf("%d  ",i);
    }
}