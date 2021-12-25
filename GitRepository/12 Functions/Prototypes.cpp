#include<iostream>
using namespace std;

/* FUNCTION PROTOTYPE 
   type function-name (arguments); 
   int sum(int a, int b); ====> is Acceptable 
   int sum(int, int ); ====> is Acceptable 
   int sum(int a, int b); ====> is NOT Acceptable 
   We don't need to write void inside brackets 
*/
int sum(int , int);
void f();

int main(){
    int num1 , num2 ;
    cout<<"Enter the First number "<<endl;
    cin>>num1;
    cout<<"Enter the Second number "<<endl;
    cin>>num2;
    cout<<"The value is "<<sum(num1, num2); /*num1 and num2 are ACTUAL PARAMETERES*/
    f();
    return 0;
}
int sum(int a, int b){  /*a and b are FORMAL PARAMETERES*/
    int c = a+b;
    return c;
    /*Formal parameteres a and b will be taking values from actual parameteres num1 and num2*/
}

/*Formal Parameteres ====> The parameteres we made for execution here they are in line 22  */
/*Actual Parameteres ====> The parameteres we made from which the function will execute 
like here in line 19 */ 
/*Formal and Actual parameteres may be same value but it ill  still work*/

void f(){
    cout<<"\nEnjoy your sum"<<endl;
}
