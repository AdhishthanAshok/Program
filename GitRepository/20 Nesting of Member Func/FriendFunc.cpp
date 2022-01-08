#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    
    public: 
        friend Complex SumNumbers(Complex s1 , Complex s2);
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        // void setDataSum(Complex s1 , Complex s2){
        //     a = s1.a + s2.a;            
        //     b = s1.b + s2.b;            
        // }
        void Print(){
            cout<<"Your complex numbers are: "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex SumNumbers(Complex s1 , Complex s2){
    Complex s3;
    s3.setData((s1.a + s2.a),(s1.b + s2.b));
    return s3;
}

int main(){
    // int num1 , num2 ,num3 , num4;
    // cout<<"Enter two real numbers: "<<endl;
    // cin>>num1;
    // cin>>num2;
    // cout<<"Enter two Imaginary part numbers: "<<endl;
    // cin>>num3;
    // cin>>num4;
    // Complex c1 , c2 , c3;
    // c1.setData(num1 , num2);
    // c1.Print();
    // c2.setData(num3 , num4);
    // c2.Print();
    // c3.setDataSum(c1 , c2);
    // c3.Print();
    Complex c1 , c2 , sum;
    int num1 , num2 ,num3 , num4;
     cout<<"Enter two real numbers: "<<endl;
     cin>>num1;
     cin>>num2;
     cout<<"Enter two Imaginary part numbers: "<<endl;
     cin>>num3;
     cin>>num4;
    c1.setData(num1,num2);
    c1.Print();

    c2.setData(num3,num4);  
    c2.Print();

    sum = SumNumbers(c1,c2);
    sum.Print();

    return 0;
}
