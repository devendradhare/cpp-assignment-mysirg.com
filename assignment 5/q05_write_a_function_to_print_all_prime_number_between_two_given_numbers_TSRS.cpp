#include <iostream>
#include <conio.h>
using namespace std;
void prime_between(int a, int b);
int main()
{
    int a, b;
    cout << "\nPrime numbers between two numbers a and b\nEnter two numbers : ";
    cin >> a >> b;
    prime_between(a, b);
    getch();
}
void prime_between(int a, int b)
{
    int i, j;
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for (i = a; i <= b; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            cout << i << " ";
        }
    }
}