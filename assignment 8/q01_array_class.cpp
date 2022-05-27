#include <iostream>
#include <conio.h>
using namespace std;

class array
{
private:
    int arr[10];

public:
    char inputArrayElements()
    {
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
        return 0;
    }
    int findMaxElement()
    {
        int max = arr[0];
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int findMinElement()
    {
        int min = arr[0];
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }
    void sort()
    {
        for (int i = 10; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int tmp;
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }
    void editElement(int ind, int data)
    {
        arr[ind] = data;
    }
    char display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        return ' ';
    }
    int sumOfElement()
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
    int averageOfElement()
    {
        return sumOfElement()/10;
    }
};

int main()
{
    array a1;
    cout << "enter 10 numbers : " << a1.inputArrayElements();

    cout << "max = " << a1.findMaxElement() << endl;
    cout << "min = " << a1.findMinElement() << endl;
    cout << "a1 = " << a1.display() << endl;
    a1.editElement(2, 4);
    cout << "a1 = " << a1.display() << endl;
    a1.sort();
    cout << "a1 sort " << a1.display() << endl;
    cout << "a1 sum = " << a1.sumOfElement()<<endl;
    cout << "a1 average " << a1.averageOfElement()<<endl;
    getch();
}