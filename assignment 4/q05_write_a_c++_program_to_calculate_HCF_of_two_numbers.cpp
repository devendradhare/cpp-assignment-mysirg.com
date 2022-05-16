#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, i, HCM = 1;
    cout << "\nHCF of two number\nEnter any two numbers : ";
    cin >> a >> b;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            HCM = i;
        }
    }
    cout <<"HCF of "<<a<<" and "<<b<<" is = "<<HCM;
    getch();
}