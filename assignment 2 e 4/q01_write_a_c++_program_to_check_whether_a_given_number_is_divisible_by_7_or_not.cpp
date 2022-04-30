#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "\ncheck number is divisible by 7 or not\nenter a number : ";
    cin >> n;
    if (n % 7)
        cout << n << " is not divisible by 7\n";
    else
        cout << n << " is divisible by 7\n";
    getch();
}