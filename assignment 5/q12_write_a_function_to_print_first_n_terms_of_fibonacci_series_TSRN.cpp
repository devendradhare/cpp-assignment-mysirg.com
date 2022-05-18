#include <iostream>
#include <conio.h>
using namespace std;
void fibonacci(int n);
int main()
{
    int n;
    cout << "\nFirst n terms of fibonacci series\nEnter term n : ";
    cin >> n;
    cout << n << " terms of fibonacci series   \n";
    fibonacci(n);
    getch();
}
void fibonacci(int n)
{
    int i = 0, a = -1, b = 1, c;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << " " << c;
    }
}