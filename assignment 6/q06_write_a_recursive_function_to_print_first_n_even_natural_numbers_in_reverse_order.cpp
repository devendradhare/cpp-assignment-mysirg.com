#include<iostream>
#include<conio.h>
using namespace std;
void n_even(int n);
int main()
{
    int n;
    cout<<"\nFirst n even natural number in reverse order\nEnter a number : ";
    cin>>n;
    n_even(n);
    getch();
}
void n_even(int n)
{
    if (n>0)
    {
        cout<<n+n<<" ";
        n_even(n-1);
    }
}