#include <iostream>
#include <conio.h>
using namespace std;
class Result
{
private:
    int resulted, total_attempt, net_right, net_wrong;
    float marks_for_right, marks_for__wrong;

public:
    Result()
    {
        marks_for_right = 0;
        marks_for__wrong = 0;
    }
    Result(int a, int b)
    {
        marks_for_right = a;
        marks_for__wrong = b;
    }
    void setResult(int a, int b, int c, int d, int e)
    {
        total_attempt = a;
        net_right = b;
        net_wrong = c;
        marks_for_right = d;
        marks_for__wrong = e;
    }
    void showResult()
    {
        cout << "\ntotal attempt : " << total_attempt << "\nnet right : " << net_right << "\nnet wrong : " << net_wrong << "\nmarks for right : " << marks_for_right << "\nmarks for wrong : " << marks_for__wrong << endl;
    }
};

int main()
{
    Result s1(3,97);
    s1.setResult(23,12,3,45,10);
    s1.showResult();

    getch();
}