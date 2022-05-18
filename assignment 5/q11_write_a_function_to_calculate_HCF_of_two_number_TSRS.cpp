#include<iostream>
#include<conio.h>
using namespace std;
int HCF(int a,int b);
int main()
{
    int a,b; 
    cout<<"\nHCF calculater\nEnter any two numbers : ";
    cin>>a>>b;
    cout<<"\nHCF of "<<a<<" and "<<b<<" is "<<HCF(a,b)<<"\n\n";
    getch();
}
int HCF(int a,int b)
{
    int i,hcf;
    for(i = 1; i <= a; i++)
    {
        if (a%i==0&&b%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}