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
        cout << endl
             << a << " + " << b << "i";
    }
    Complex addition(Complex A)
    {
        Complex temp;
        temp.a = a + A.a;
        temp.b = b + A.b;
        return temp;
    }
    Complex subtraction(Complex A)
    {
        Complex temp;
        temp.a = a - A.a;
        temp.b = b - A.b;
        return temp;
    }
    Complex multiplication(Complex A)
    {
        Complex temp;
        temp.a = a * A.a;
        temp.b = b * A.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(10, 15);
    c2.setData(20, 45);
    c1.showData();
    c2.showData();
    c3 = c1.addition(c2);
    c3.showData();
    c4 = c1.subtraction(c2);
    c4.showData();
    c3 = c1.multiplication(c1);
    c3.showData();
    getch();
}