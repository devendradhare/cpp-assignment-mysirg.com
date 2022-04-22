// this program is take a character from user and displays its ascii code
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("\nenter a character for there ascii code : ");
    scanf("%c", &a);
    printf("\nascii code of %c is %d",a,a);
    getch();
    
}