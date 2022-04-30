#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    cout << "\nCheck triangle is right angle triangle or not\nEnter lenght of 3 sides : ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            x = a;
            b > c?y = b,z = c:y = c,z = b;
        }
        else
        {
            x = c;
            y = a;
            z = b;
        }
    }
    else
    {
        if (b > c)
        {
            x = b;
            a > c ? y = a, z = c : y = c, z = a;
        }
        else
        {
            x = c;
            y = b;
            z = a;
        }
    }
    if (x * x == y * y + z * z)
    {
        // x*x<<" = "<<y*y<<" + "<<z*z<<
        cout << "\nyes it is sides of right angle triangle";
    }
    else
    {
        cout << "\nno it is not sides of right angle triangle";
    }
}