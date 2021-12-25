#include <iostream>
#include <string>
using namespace std;

class binary
{
    /*  OOPS --> Classes and Objects

        C++ --> initially called as --> C with Classes
        class --> extension of structure (in C)
        structures had limitations
                 - members are pulic
                 - No methods
        classes --> structures + more
        classes --> can have methods and properties 
        classes --> can make few members as public and few as private   
        structures in C++ are typedefed
        you can declare objects along with the class declaration like this:
            /* class employee{
                    Class Definition
                } harry , rohan ;
            */
    // harry.salary = 8 make no sense if salary is private

    // Nesting of member function

    string s;

public:
    void read(void);
    void chk_bin(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number " << endl;
            exit(0);
        }
    }
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    return 0;
}
