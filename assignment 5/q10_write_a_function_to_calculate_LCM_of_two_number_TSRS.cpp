#include <iostream>
#include <conio.h>
using namespace std;
int LCM(int a, int b);
int main()
{
    int a, b;
    cout << "\nLCM calculator\nEnter a any two numbers : ";
    cin >> a >> b;
    cout << "\nLCM of " << a << " and " << b << " is " << LCM(a, b) << ".\n";
    getch();
}
int LCM(int a, int b)
{
    int i, lcm = 1;
    for (i = 2; i <= a && i <= b;)
    {
        if (a % i == 0 && b % i == 0)
        {
            lcm *= i;
            a /= i;
            b /= i;
        }
        else
            i++;
    }
    return lcm*a*b;
}