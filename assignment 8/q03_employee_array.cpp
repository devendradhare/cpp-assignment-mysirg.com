#include <iostream>
#include <conio.h>
#include <string.h>
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
    int getName()
    {
        return name[0];
    }
    void show_Employee()
    {
        cout << "\n"
             << impid << " " << name << " " << salary;
    }
    void displayEmployees(Employee *A)
    {
        for (int i = 0; i < 5; i++)
        {
            A[i].show_Employee();
        }
    }
    void sortEmployeesBySalary(Employee *A)
    {
        for (int j = 5; j > 0; j--)
        {
            for (int i = 0; i < j-1; i++)
            {
                if (A[i].getSalary()>A[i+1].getSalary())
                {
                    Employee temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;
                }
            }
        }
    }
    void sortEmpoyeeByName(Employee *name)
    {
        for(int j = 5; j> 0; j--)
        {
            for(int i = 0; i < j-1; i++)
            {
                if (name[i].getName()>name[i+1].getName())
                {
                    Employee temp = name[i];
                    name[i] = name[i+1];
                    name[i+1] = temp;
                }
            }
        }
    }
    void sortEmployeeById(Employee *id)
    {
        for(int j = 5; j> 0; j--)
        {
            for(int i = 0; i < j-1; i++)
            {
                if (id[i].getEmpid()>id[i+1].getEmpid())
                {
                    Employee temp = id[i];
                    id[i] = id[i+1];
                    id[i+1] = temp;
                }
            }
        }
    }    
};
int main()
{
    Employee e1[5];
    for (int i = 0; i < 5; i++)
    {
        int id;
        cout << "Enter employee id : ";
        cin >> id;
        e1[i].setEmployeeId(id);

        char name[30];
        cout << "Enter employee name : ";
        cin.ignore();
        cin >> name;
        e1[i].setEmployeeName(name);

        float salary;
        cout << "Enter employee salary : ";
        cin >> salary;
        e1[i].setEmployeeSalary(salary);
    }
    char name[30];
    cin>>name;
    cout<<endl;
    cout<<"original list"<<endl;
    e1[4].displayEmployees(e1);
    cout<<endl;
    e1[0].sortEmployeesBySalary(e1);
    cout<<"sort by salayr "<<endl;
    e1[0].displayEmployees(e1);
    cout<<endl;
    e1[0].sortEmpoyeeByName(e1);
    cout<<"sort by name"<<endl;
    e1[0].displayEmployees(e1);
    cout<<endl;
    e1[0].sortEmployeeById(e1);
    cout<<"sort by id"<<endl;
    e1[0].displayEmployees(e1);
    getch();
}