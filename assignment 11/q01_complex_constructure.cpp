#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " + " << b << "i \n";
    }
};

int main()
{
    complex c1(12, 24), c2, c3, c4;
    c2.setData(5, 6);
    c3.setData(40, 50);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    getch();
}