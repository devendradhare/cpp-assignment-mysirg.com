#include<iostream>
#include<conio.h>
using namespace std;
double combination(double n,double r);
int main()
{
    double n,r;
    cout << "\nCalculate combination\nEnter total elements n : ";
    cin>>n;
    cout << "Enter  selected elements r : ";
    cin>>r;
    cout<<combination(n,r);
    getch();
}
double combination(double n,double r)
{
    double i,fn = 1,fnr = 1,fr = 1;
    for(i = 2; i <= n; i++)
    {
        fn *= i;
    }
    for(i = 2; i <= r; i++)
    {
        fr *= i;
    }
    for(i = 2; i <= n-r; i++)
    {
        fnr *= i;
    }
    return fn/(fr*fnr);
}