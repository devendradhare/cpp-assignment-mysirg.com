#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"comparing two numbers";
    cout<<"\nEnter any two number : ";
    cin>>a>>b;
    if (a>b)
    {
        cout<<a<<" is grater then "<<b;
    }
    else if (b>a)
    {
        cout<<b<<" is grater then "<<a;
    }
    else
    {
        cout<<"both are equal";
    }
    
    getch();
}