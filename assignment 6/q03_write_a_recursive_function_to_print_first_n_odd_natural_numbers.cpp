#include<iostream>
#include<conio.h>
using namespace std;
void n_odd(int n);
int main()
{
    int n;
    cout<<"\nFirst n odd natural numbers\nEnter a number : ";
    cin>>n;
    n_odd(n);
    getch();
}
void n_odd(int n)
{
    if (n>1)
    {
        n_odd(n-1);
    }
    cout<<n+n-1<<" ";
}