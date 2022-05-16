#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i, t, rn = 0;
    cout << "\nReverse a number\nEnter a number : ";
    cin >> n;
    while (n > 0)
    {
        t = n%10;
        rn *= 10;
        rn += t;
        n /= 10;
    }
    cout<<"\nreversed number : "<<rn<<endl<<endl;

    getch();
}