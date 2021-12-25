#include<iostream>
using namespace std;

inline int product(int a , int b){
    // Not recommended to use INLINE with below function 
    // static int c = 0; Here this will execute only once....
    // c = c + 1;   here the function is run and the value of c will be retained everytime....
    return a*b;
}
 
int main(){
    int a ,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    cout<<"The Product will be "<<product(a,b)<<endl;
    return 0;
}