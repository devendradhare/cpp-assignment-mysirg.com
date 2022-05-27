#include <iostream>
#include <conio.h>
using namespace std;

class Account
{
private:
    double account_no, balance;
public:
    static float rateOfInterest;
    void setBalnce(int b)
    {
        balance = b;
    }
    void setAccountNo(double accno)
    {
        account_no = accno;
    }
    double getBalance()
    {
        return balance;
    }
    double getAccountNo()
    {
        return account_no;
    }
    static void setRateOfInterest(float rate)
    {
        rateOfInterest = rate;
    }
    static float getRateOfInterest()
    {
        return rateOfInterest;
    }
};
float Account::rateOfInterest = 0;

int main()
{
    Account user_1;

    user_1.setAccountNo(12347);
    user_1.setBalnce(10343.2893);
    Account::setRateOfInterest(45);

    cout<<"\n account no : "<<user_1.getAccountNo();
    cout<<"\n balance : "<<user_1.getBalance();
    cout <<"\n rate of interest : "<<Account::getRateOfInterest();

    getch();
}