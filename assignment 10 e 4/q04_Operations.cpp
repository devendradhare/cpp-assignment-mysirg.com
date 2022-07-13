#include<iostream>
#include<conio.h>
using namespace std;
class Operations
{
private:
    float pi = 3.14;
public:
    int area(int a,int b)
    {
        return a*b;
    }
    float area(float a)
    {
        return pi*a*a;
    }
    int add(int a,int b)
    {
        return a+b;
    }
    float add(float a,float b)
    {
        return a+b;
    }
    void 
};

int main()
{   
    Operations ra,cr;
    float a,b;
    int n;
    cout<<"\n\n     area calculater\n1 area of ractangle\n2 area of circle\n\nselect one : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"\nenter the two sides of the ractangle : ";
        cin>>a>>b;
        a = ra.area(a,b);
        cout<<a;
        break;
    case 2:
        cout<<"\nenter the radius of the circle : ";
        cin>>a;
        a = ra.area(a);
        cout<<a;
        break;
    case 3:
        cout<<"\nenter any two numbers : ";
        cin>>a>>b;
        a = ra.add(a,b);
        cout<<a;
        break;
    
    default:

        break;
    }
    getch();
}