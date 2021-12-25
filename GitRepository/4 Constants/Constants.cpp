#include<iostream>
using namespace std;

int main(){
//  int a=56;
// cout<<"This is the value of a: "<<a<<endl;

// a = 45;
// cout<<"This is new value without Const operator: "<<a<<endl;

  const int a = 55;
  cout<<"This is value of a: "<<a<<endl;
  
  a = 78;
  cout<<"This is the value of a with Constant Operator "<<a<<endl;\

  //Here a error will show because of the const operator//


    return 0;   
}