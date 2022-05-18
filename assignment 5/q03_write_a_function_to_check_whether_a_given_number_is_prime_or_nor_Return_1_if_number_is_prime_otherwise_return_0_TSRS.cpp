#include <iostream>
#include <conio.h>
using namespace std;
inline int prime(int N);
int main()
{
    int n;
    cout << "\nCheck number is prime or not\nEnter a number : ";
    cin >> n;
    if (prime(n))
    {
        cout << "\n"
             << n << " is a prime number" << endl;
    }
    else
    {
        cout << "\n"
             << n << " is not a prime number" << endl;
    }

    getch();
}
int prime(int N)
{
    int i;
    for (i = 2; i < N; i++)
    {
        if (N % i == 0)
            break;
    }
    if (i >= N)
        return 1;
    else
        return 0;
}