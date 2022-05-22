#include<iostream>
#include<conio.h>
using namespace std;
void n_even(int n);
int main()
{
    int n;
    cout<<"\nFirst n even natural number\nEnter a number : ";
    cin>>n;
    n_even(n);
    getch();
}
void n_even(int n)
{
    if (n>0)
    {
        n_even(n-1);
        cout<<n+n<<" ";
    }
}