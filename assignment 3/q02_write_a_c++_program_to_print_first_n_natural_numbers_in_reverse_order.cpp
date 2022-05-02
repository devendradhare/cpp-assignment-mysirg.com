#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N,i;
    cout<<"print first N natural number in reverse order\nenter a number : ";
    cin>>N;
    for(i = N; i >= 1; i--)
    {
        cout<<i<<" ";
    }
    getch();
}