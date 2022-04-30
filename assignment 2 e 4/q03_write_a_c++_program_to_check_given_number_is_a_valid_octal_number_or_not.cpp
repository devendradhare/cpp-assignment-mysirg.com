#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,n2,t,i;
    cout<<"Enter a number : ";
    cin>>n;
    n2 = n;
    while (n2 > 0)
    {
        t = n2%10;
        if (t>=8)
        {
            cout<<n<<" is not octal number";
            break;
        }
        n2 /= 10;
    }
    if (n2 <= 0)
    {
        cout<<n<<" is a octal number";
    }
    getch();
}