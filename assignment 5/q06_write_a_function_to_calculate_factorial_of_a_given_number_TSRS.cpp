#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "\nCalculate factorial of a number\nEnter a number : ";
    cin >> n;
    cout << "\nFactorial of " << n << " is " << factorial(n);
    getch();
}
int factorial(int n)
{
    int i,ft = 1;
    for (i = 2; i <= n; i++)
    {
        ft *= i;
    }
    return ft;
}