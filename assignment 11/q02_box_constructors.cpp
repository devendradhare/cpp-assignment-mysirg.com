/*
assignment 11 que. 02 ->
define a class box with instance member variables length, bredth, and height.
define instance member function setDimensions() and showDimensions().
also difine three constructors:
    a. Non-parameterized constructor.
    b. Takes three arguments for three dimension
    c. Take one argument which is for all dimensions
*/

#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    float length, breadth, height;

public:
    box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    box(float all)
    {
        length = all;
        breadth = all;
        height = all;
    }
    box(float L, float B, float H)
    {
        length = L;
        breadth = B;
        height = H;
    }
    void setDimensions(float L, float B, float H)
    {
        length = L;
        breadth = B;
        height = H;
    }
    void showDimension()
    {
        cout << "\n"
             << "length = " << length << " breadth = " << breadth << " height = " << height;
    }
};
int main()
{
    box b1(12, 23, 34), b2(56), b3, b4;
    b3.setDimensions(43, 32, 21);
    b1.showDimension();
    b2.showDimension();
    b3.showDimension();
    b4.showDimension();
}