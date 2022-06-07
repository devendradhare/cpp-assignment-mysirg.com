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
    setDimensions(float L, float B, float H)
    {
        length = L;
        breadth = B;
        height = H;
    }
    showDimension()
    {
        cout << "\n"
             << "length = " << length << " breadth = " << breadth << " height = " << height;
    }
};
int main()
{
    box b1(12,23,34),b2(56),b3,b4;
    b3.setDimensions(43,32,21);
    b1.showDimension();
    b2.showDimension();
    b3.showDimension();
    b4.showDimension();
}