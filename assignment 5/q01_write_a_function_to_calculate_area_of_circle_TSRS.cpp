#include<iostream>
#include<conio.h>
using namespace std;
inline float area(float R);
int main()
{
    float r,ar;
    cout<<"\nCalculate area of circle\nEnter radius of the circle : ";
    cin>>r;
    ar = area(r);
    cout<<"\narea of the circle = "<<ar<<endl;
    getch();
}
float area(float R)
{
    return (22/7.0)*R*R;
}