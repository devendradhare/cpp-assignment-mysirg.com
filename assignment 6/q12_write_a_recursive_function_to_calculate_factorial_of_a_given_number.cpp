#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"Factorial of n\nEnter a number n : ";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is "<<factorial(n);
    getch();
}
int factorial(int n)
{
    int facto = n;
    if(n>2)
    {
        facto *= factorial(n-1);
    }
    return facto;
}