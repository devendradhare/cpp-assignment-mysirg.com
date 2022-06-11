#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
private:
    long long hour, min, sec;

public:
    void setTime(long long h, long long m, long long s)
    {
        hour = h;
        min = m;
        sec = s;
        rearrenge();
    }
    void rearrenge()
    {
        while (1)
        {
            if (sec >= 60)
            {
                min += sec / 60;
                sec = sec % 60;
            }
            if (min >= 60)
            {
                hour += min / 60;
                min = min % 60;
            }
            if (min < 0)
            {
                sec = (hour * 60 * 60) + (min * 60) + sec;
                hour = 0;
                min = 0;
                continue;
            }
            if (sec < 0)
            {
                sec = (hour * 60 * 60) + (min * 60) + sec;
                hour = 0;
                min = 0;
                continue;
            }
            break;
        }
    }
    void showTime()
    {
        cout << " " << hour << ":" << min << ":" << sec << " \n";
    }
    Time operator+(Time asdf)
    {
        Time temp;
        temp.hour = hour + asdf.hour;
        temp.min = min + asdf.min;
        temp.sec = sec + asdf.sec;
        temp.rearrenge();
        return temp;
    }
    Time operator-(Time asdf)
    {
        Time temp;
        temp.hour = hour - asdf.hour;
        temp.min = min - asdf.min;
        temp.sec = sec - asdf.sec;
        temp.rearrenge();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3, t4;
    t1.setTime(10, 0, 0);
    cout << "t1 = ";
    t1.showTime();
    t2.setTime(0, 0, 3);
    cout << "t2 = ";
    t2.showTime();
    t3 = t1 + t2;
    cout << "t1+t2 = ";
    t3.showTime();
    t4 = t1 - t2;
    cout << "t1-t2 = ";
    t4.showTime();
    t3 = t4 + t2;
    cout << "t4+t2 = ";
    t3.showTime();
    getch();
}
