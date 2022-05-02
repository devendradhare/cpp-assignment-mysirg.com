#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N,i;
    cout<<"first N even natural number\nenter a number N : ";
    cin>>N;
    for(i = 1; i <= N; i++)
    {
        cout<<i*2<<" ";
    }
    getch();
}