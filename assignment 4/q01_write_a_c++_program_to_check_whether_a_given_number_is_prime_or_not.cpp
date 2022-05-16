#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i;
    cout << "\nCheck N is prime number or not\nEnter a number N : ";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i >= n)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
    getch();
}