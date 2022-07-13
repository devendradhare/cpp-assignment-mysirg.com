#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << "+" << b << "i";
    }
    Complex operator-()
    {
        Complex tmp;
        tmp.a = -a;
        tmp.b = b;
        return tmp;
    }
    Complex operator++()
    {
        Complex tmp = *this;
        return tmp;
        tmp.a = ++a;
        tmp.b = b;
        cout<<"hello";
    }
};

int main()
{
    Complex cmp1;
    cmp1.setData(3, 4);
    cmp1 = -cmp1;
    cmp1.showData();
    cmp1 = ++cmp1;
    cmp1.showData();
    getch();
}