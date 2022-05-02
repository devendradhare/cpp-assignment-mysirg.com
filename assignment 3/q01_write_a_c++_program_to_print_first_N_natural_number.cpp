#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N,i;
    cout<<"print first N natural number\nenter a number : ";
    cin>>N;
    for(i = 1; i <= N; i++)
    {
        cout<<i<<" ";
    }
    getch();
}