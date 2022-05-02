#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,fcto = 1,i;
    cout<<"\nFactorial of N\nEnter a number N : ";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        fcto *= i;
    }
    cout<<"\nFactorial of "<<n<<" = "<<fcto;
    getch();
}