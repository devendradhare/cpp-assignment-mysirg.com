#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i, bn = 9; // rn = 0
    cout << "Decimal to binary convertar\nEnter a decimal number : ";
    cin >> n;
    while (n > 0)
    {
        bn *= 10;
        bn += n % 2;
        n /= 2;
    }
    cout << "    ";
    while (bn > 9)
    {
        cout << bn % 10;
        bn /= 10;
    }
    // while (bn > 0)
    // {
    //     rn *= 10;
    //     rn += bn%10;
    //     bn /= 10;
    // }
    // cout<<"\nbinary = "<<8.rn;
    getch();
}