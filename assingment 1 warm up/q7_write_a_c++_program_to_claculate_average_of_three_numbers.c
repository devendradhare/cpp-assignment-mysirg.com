// this program is claculate average of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\naverage of three numbers\nenter any three numbers : ");
    scanf("%d%d%d", &a,&b,&c);
    printf("\naverage = %d\n",(a+b+c)/3);
    getch();
}