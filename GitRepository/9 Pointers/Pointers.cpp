#include<iostream>
using namespace std;

int main(){
    int a=4;
    int* b=&a;
    /*This is Pointer-to-Pointer*/ 
    cout<<"The adress of a is "<<b<<endl; 
    cout<<"The adress of a is "<<&a<<endl; 
    cout<<"The value of a is "<<*b<<endl;
    cout<<endl;
    /*This is Pointer-to-Pointer*/
    int** c=&b;
    cout<<"The adress of a is "<<&b<<endl;
    cout<<"The value of a is "<<**c<<endl;

    
    return 0;
}