#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, t = 0;
    cout << "\nHighest value digit in a number\nEnter a number : ";
    cin >> n;
    while (n > 0)
    {
        if (t < n % 10)
        {
            t = n % 10;
        }
        n /= 10;
    }
    cout << t;
    getch();
}