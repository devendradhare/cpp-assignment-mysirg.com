#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char n;
    cout<<"Enter a charator : ";
    cin>>n;
    switch (n)
    {
    case 'A' ... 'Z':
        cout<<"uppercase alphabet";
        break;
    case 'a' ... 'z':
        cout<<"lowercase alphabet";
        break;
    case '0' ... '9':
        cout<<"digit";
        break;
    default:
        cout<<"special charactore";
        break;
    }
    getch();
}