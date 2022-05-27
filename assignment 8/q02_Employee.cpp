#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
private:
    int impid;
    char name[30];
    float salary;
public:
    void setEmployeeId(int id)
    {
        impid = id;
    }
    int getEmpid()
    {
        return impid;
    }
    void setEmployeeSalary(float s)
    {
        salary = s;
    }
    float getSalary()
    {
        return salary;
    }
    void setEmployeeName(char N[])
    {
        strcpy(name, N);
    }
    void getName()
    {
        cout<<name;
    }
    void show_Employee()
    {
        cout<<"\n"<<impid<<" "<<name<<" "<<salary;
    }
};

int main()
{
    Employee e1;
    int id;
    char name[30];
    float salary;

    cout<<"enter employee employeeId : ";
    cin>>id;
    e1.setEmployeeId(id);

    cout<<"enter employee name : ";
    cin.ignore();
    cin.get(name,30);
    e1.setEmployeeName(name);

    cout<<"enter employee salary : ";
    cin>>salary;
    e1.setEmployeeSalary(salary);

    e1.getName();

    e1.show_Employee();
    getch();
}