#include <iostream>
#include <conio.h>
using namespace std;
int next_prime(int N);
int main()
{
    int n;
    cout << "\nNext prime number\nEnter a number : ";
    cin >> n;
    cout << "\n"
         << next_prime(n);
    getch();
}
int next_prime(int N)
{
    int i;
    N++;
    for (N;; N++)
    {
        for (i = 2; i <= N; i++)
        {
            if (N % i == 0)
            {
                break;
            }
        }
        if (i >= N)
        {
            return N;
        }
    }
}