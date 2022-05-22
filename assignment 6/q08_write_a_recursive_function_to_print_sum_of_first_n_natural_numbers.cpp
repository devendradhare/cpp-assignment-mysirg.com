#include <iostream>
#include <conio.h>
using namespace std;
int n_sum(int n);
int main()
{
    int n, sum;
    cout << "\nsum of First n natural number\nEnter a number : ";
    cin >> n;
    sum = n_sum(n);
    cout << "\nsum of first " << n << " natural numbers is " << sum;
    getch();
}
int n_sum(int n)
{
    int sum = n;
    if (n >= 1)
    {
        sum += n_sum(n - 1);
    }
    return sum;
}