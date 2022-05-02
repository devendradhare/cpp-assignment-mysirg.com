#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum = 0,i;
    cout<<"Sum of squares of first N natural numbers\nEnter a number n : ";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    cout<<"Sum = "<<sum;
    getch();
}