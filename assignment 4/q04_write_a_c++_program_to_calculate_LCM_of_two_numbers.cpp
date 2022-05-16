#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, a_copy, b_copy, i, LCM = 1;
    cout<<"Calculate LCM of two numbers\nEnter two numbers : ";
    cin>>a>>b;
    a_copy = a;
    b_copy = b;
    for(i = 2; i <= a && i <= b;)
    {
        if (a % i == 0 && b % i == 0)
        {
            LCM *= i;
            a /= i;
            b /= i;
        }
        else
            i++;
    }
    LCM *= a * b;
    cout<<"\n LCM of "<<a_copy<<" and "<<b_copy<<" is "<<LCM;
    getch();
}