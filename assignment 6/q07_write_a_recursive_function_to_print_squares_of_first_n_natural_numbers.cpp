#include<iostream>
#include<conio.h>
using namespace std;
void n_squares(int n);
int main()
{
    int n;
    cout<<"\nSquares of first n natural number\nEnter a number : ";
    cin>>n;
    n_squares(n);
    getch();
}
void n_squares(int n)
{
    if (n>0)
    {
        n_squares(n-1);
        cout<<n*n<<" ";
    }
}