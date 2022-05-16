#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, t = 0;
    cout << "\nDecimal to octal convertor\nEnter a decimal number : ";
    cin >> n;
    while (n > 0)
    {
        t *= 10;
        t += n % 8;
        n = n / 8;
    }
    while (t > 0)
    {
        n *= 10;
        n += t % 10;
        t /= 10;
    }
    cout << n;
    getch();
}