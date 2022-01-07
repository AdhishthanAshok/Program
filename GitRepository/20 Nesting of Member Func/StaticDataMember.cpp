#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the ID of Emoloyee: " << endl;
        cin >> Id;
        count++;
    }

    void getdata()
    {
        cout << "The ID of the Employee is: " << Id <<endl<< "The Employee number is: " << count << endl;
    }

    static void getCount()
    {
        // cin>>Id;   It Will throw an Error 
        cout<<"The Count of the Employee is: "<<count<<endl;
    }
};
int Employee :: count;
int main()
{   Employee Major, Minor, Average;

    Major.setdata();
    Major.getdata();
    Employee::getCount();
   
    Minor.setdata();
    Minor.getdata();
    Employee::getCount();

    Average.setdata();
    Average.getdata();
    Employee::getCount();
    return 0;
}