#include <iostream>
#include <conio.h>
using namespace std;
double combination(double n, double r);
void pascal(int rows);
int main()
{
    int rows;
    cout << "\nPascal triangle\nEnter number of rows you want : ";
    cin >> rows;
    pascal(rows);
    getch();
}
void pascal(int rows)
{
    int i, j;
    for (i = 0; i <= rows; i++)
    {
        for(j = 0; j <= rows-i; j++)
            cout<<" ";
        for(j = 0; j <= i; j++)
            cout<<" "<<combination(i,j);
        cout << "\n";
    }
}
double combination(double n, double r)
{
    double i, fn = 1, fnr = 1, fr = 1;
    for (i = 2; i <= n; i++)
    {
        fn *= i;
    }
    for (i = 2; i <= r; i++)
    {
        fr *= i;
    }
    for (i = 2; i <= n - r; i++)
    {
        fnr *= i;
    }
    return fn / (fr * fnr);
}
