#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
private:
    int real, imaginary;

public:
    setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    showData()
    {
        cout << "\n"
             << real << " + " << imaginary << "i";
    }
    complex operator+(complex asdf)
    {
        complex temp;
        temp.real = asdf.real + real;
        temp.imaginary = asdf.imaginary + imaginary;
        return temp;
    }
    complex operator-(complex asdf)
    {
        complex temp;
        temp.real = asdf.real - real;
        temp.imaginary = asdf.imaginary - imaginary;
        return temp;
    }
    complex operator*(complex asdf)
    {
        complex temp;
        temp.real = asdf.real * real;
        temp.imaginary = asdf.imaginary * imaginary;
        return temp;
    }
    int operator==(complex asdf)
    {
        if (asdf.real == real && asdf.imaginary == imaginary)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(10, 20);
    c2.setData(10, 20);
    c1.showData();
    c2.showData();
    c3 = c1 + c2;
    c3.showData();
    c3 = c1 - c2;
    c3.showData();
    c3 = c1 * c2;
    c3.showData();
    getch();
    if (c1 == c2)
    {
        cout << "\nboth are same";
    }
    else
    {
        cout << "\nboth are different";
    }
}