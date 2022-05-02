#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,count = 0,i,t;
    cout<<"Sum of digits in a number N\nEnter a number N : ";
    cin>>n;
    while (n > 0)
    {   
        t = n%10;
        count += t;
        n /= 10;
    }
    cout<<"sum of digits = "<<count;
    getch();
}