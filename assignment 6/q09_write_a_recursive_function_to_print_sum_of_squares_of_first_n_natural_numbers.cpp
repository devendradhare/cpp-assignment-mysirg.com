#include<iostream>
#include<conio.h>
using namespace std;
int n_squares_sum(int n);
int main()
{
    int n,sum;
    cout<<"\nSum of squares of first n natural numbers\nEnter a number : ";
    cin>>n;
    sum = n_squares_sum(n);
    cout<<"sum = "<<sum;
    getch();
}
int n_squares_sum(int n)
{
    int sum = n*n;
    if (n >= 1)
    {
        sum += n_squares_sum(n - 1);
    }
    return sum;
    
}