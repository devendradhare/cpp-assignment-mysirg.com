#include<iostream>
#include<conio.h>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void set_time()
    {
        cout<<"Enter time HH:MM:SS";
        cin>>h>>m>>s;
    }
    void show_time()
    {
        cout<<h<<"H "<<m<<"M "<<s<<"S "<<endl;
    }
};

int main()
{
    time india_time,nepal_time;
    india_time.set_time();
    nepal_time.set_time();
    time us_time = nepal_time;
    india_time.show_time();
    nepal_time.show_time();
    us_time.show_time();
}