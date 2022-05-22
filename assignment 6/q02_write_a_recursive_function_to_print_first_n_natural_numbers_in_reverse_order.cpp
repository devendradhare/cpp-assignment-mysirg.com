#include<iostream>
#include<conio.h>
using namespace std;
void n_natural_reverse(int n);
int main()
{
    int n;
    cout << "\nRecursive function to print n natural number in reverse order \nEnter a number : ";
    cin>>n;
    n_natural_reverse(n);
    getch();
}
void n_natural_reverse(int n)
{
    if (n>=1)
    {
        cout<<n<<" ";
        n_natural_reverse(n-1);
    }
}