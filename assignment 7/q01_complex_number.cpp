#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
    void set_data(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    
};


int main()
{
    complex c1;
    int a = 5,b = 8;
    c1.set_data(a,b);
    c1.display();
    complex c2 = c1;
    c2.display();
    getch();

}