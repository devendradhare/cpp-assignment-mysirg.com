#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter a number : ";
    cin>>n;
    if (n>0)
    {
        cout<<"Positive";
    }
    else if (n<0)
    {
        cout<<"Negative";
    }
    else
    {
        cout<<"Zero";
    }
    getch();
}