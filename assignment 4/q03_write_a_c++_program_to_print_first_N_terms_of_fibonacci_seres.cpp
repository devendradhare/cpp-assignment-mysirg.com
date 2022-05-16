#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, a = -1, b = 1, c, temp, i;
    cout << "\nFirst N term of fibonacci series\nEnter a number N : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b; 
        b = c;
    }
    getch();
}