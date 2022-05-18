#include<iostream>
#include<conio.h>
using namespace std;
inline int even_or_odd(int N);
int main()
{
    int n;
    cout<<"\nCheck number is even or odd\nEnter a number : ";
    cin>>n;
    if (even_or_odd(n))
    {
        cout<<"\n"<<n<<" is an even number"<<endl;
    }
    else
    {
        cout<<"\n"<<n<<" is an odd number"<<endl;
    }
    
    getch();
}
int even_or_odd(int N)
{
    if (N%2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}