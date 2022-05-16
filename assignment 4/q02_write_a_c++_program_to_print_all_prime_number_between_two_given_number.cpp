#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, i, j;
    cout << "\nPrime number between two numbers \nEnter two numbers : ";
    cin >> a >> b;
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            cout << i<<" ";
        }
    }
    getch();
}