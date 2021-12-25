#include<iostream>
using namespace std;

int a = 77;

int main()
{  
    int a, b, c = ::a ,d;

    cout<<"This is the value of a : "<<endl;
    cin>>a;

    cout<<"This is the value of b : "<<endl;
    cin>>b;

    cout<<"This is the value of c : "<<endl;
    cin>>::a;
    
    d = a + b + c; 

    cout<<"This sum is : "<<d<<endl;
     
    return 0; 
}