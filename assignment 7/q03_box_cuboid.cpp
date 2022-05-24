#include<iostream>
#include<conio.h>
using namespace std;

class box
{
private:
    float l,h,w;
public:
    void set_dimension()
    {
        cout<<"Enter dimensions of the cuboid : ";
        cin>>l>>h>>w;
    }
    void display_dimensions()
    {
        cout<<"L = "<<l<<"\nH = "<<h<<"\nW = "<<w<<endl;
    }
    void volume()
    {
        cout<<"\n"<<l*h*w;
    }
};


int main()
{
    box b1,b2;
    b1.set_dimension();
    b2.set_dimension();
    b1.display_dimensions();
    b2.display_dimensions();
    b1.volume();
    b2.volume();
    getch();
}