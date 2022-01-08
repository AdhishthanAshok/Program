#include <iostream>
using namespace std;
class Employee
{
private:
    int Id;
    int salary;

public:
    void getData()
    {    salary=60000;
        cout << "Enter the Id of the Employee: " << endl;
        cin >> Id;
    }
    void setData()
    {
        cout << "The Id of Employee is: " << Id << endl
             << "And the salary is: " << salary << endl;
    }
};
int main(){
    Employee Meta[4];
    for (int i = 1; i <= 4; i++)
    {
        Meta[i].getData();
        Meta[i].setData();
    }
return 0;
}
