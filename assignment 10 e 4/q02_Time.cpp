#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
private:
    int hour, min, second;

public:
    void setTime(int a, int b, int c)
    {
        hour = a;
        min = b;
        second = c;
    }
    void showTime()
    {
        cout << hour << ":" << min << ":" << second << endl;
    }
    void normalize()
    {
        if (second >= 60)
        {
            min += second / 60;
            second = second % 60;
        }
        if (min > 60)
        {
            hour += min / 60;
            min = min % 60;
        }
    }
    Time Addition(Time T)
    {
        Time temp;
        temp.hour = hour + T.hour;
        temp.min = min + T.min;
        temp.second = second + T.second;
        temp.normalize();
        return temp;
    }
    Time subtraction(Time T)
    {
        Time temp;
        temp.hour = hour - T.hour;
        temp.min = min - T.min;
        temp.second = second - T.second;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time tm1, tm2, tm3;
    int h, m, s;
    cout << "enter hh:mm:ss ";
    cin >> h >> m >> s;
    tm1.setTime(h, m, s);
    cout << "enter hh:mm:ss ";
    cin >> h >> m >> s;
    tm2.setTime(h, m, s);
    // cout<<"tm1 ";
    // tm1.showTime();
    // cout<<"tm2 ";
    // tm2.showTime();
    cout << "after normalize tm1 ";
    tm1.normalize();
    tm1.showTime();
    cout << "after normalize tm2 ";
    tm2.normalize();
    tm2.showTime();
    cout << "after addition tm3 ";
    tm3 = tm1.Addition(tm2);
    tm3.showTime();
    cout << "after subtraction tm3 ";
    tm3 = tm1.subtraction(tm2);
    tm3.showTime();

    getch();
}