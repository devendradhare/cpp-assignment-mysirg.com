#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout<<"Sum of first N natural numbers\nEnter a number N : ";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout<<"sum = "<<sum;
    getch();
}