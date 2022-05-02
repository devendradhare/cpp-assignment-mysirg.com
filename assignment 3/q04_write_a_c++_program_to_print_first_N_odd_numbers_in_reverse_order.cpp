#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"First n odd numbers in reverse order\nEnter a number n : ";
    cin>>n;
    for(i = 1; i<= n; i++)
    {
        cout<<i*2-1<<" ";
    }
    getch();
}