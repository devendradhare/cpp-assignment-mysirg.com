#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double x,y,z = 1;
    cout<<"\nCalculate x power  y\nEnter velue of x and y : ";
    cin>>x>>y;
    for(int i = 1; i <= y; i++)
    {
        z *= x;
    }
    // z = x^y;
    cout<<"\n"<<x<<" power "<<y<<" = "<<z;
    getch();
}