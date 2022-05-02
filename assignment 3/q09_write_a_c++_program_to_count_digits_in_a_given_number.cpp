#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,count = 0,i;
    cout<<"Count digits in a number\nEnter a number : ";
    cin>>n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout<<"digits = "<<count;
    getch();
}