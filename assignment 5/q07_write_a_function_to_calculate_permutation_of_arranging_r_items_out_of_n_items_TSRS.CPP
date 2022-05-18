#include<iostream>
#include<conio.h>
using namespace std;
double permutation(double n,double r);
int main()
{
    double n,r;
    cout << "\nCalculate permutation\nEnter total elements n : ";
    cin>>n;
    cout << "Enter  selected elements r : ";
    cin>>r;
    cout<<permutation(n,r);
    getch();
}
double permutation(double n,double r)
{
    double i,fn = 1,fnr = 1;
    for(i = 2; i <= n; i++)
    {
        fn *= i;
    }
    for(i = 2; i <= n-r; i++)
    {
        fnr *= i;
    }
    return fn/fnr;
}