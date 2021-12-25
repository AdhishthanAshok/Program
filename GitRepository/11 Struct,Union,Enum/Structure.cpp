#include<iostream>
using namespace std;

/*Here "typedef is used to use less words ..like in line 15 we just use ep insted of struct student"*/

typedef struct student
{
     /* data */
    int rollNo;
    char firstLetter;
    float fees;
}ep;

int main(){
    ep adhish;
    adhish.rollNo = 1;
    adhish.firstLetter = 'A';
    adhish.fees = 30000;
    cout<<"This is the Roll Number of the Student "<<adhish.rollNo<<endl;
    cout<<"This is the First Letter of the Student "<<adhish.firstLetter<<endl;
    cout<<"This is the Fees of the Student "<<adhish.fees<<endl;

   return 0;
}