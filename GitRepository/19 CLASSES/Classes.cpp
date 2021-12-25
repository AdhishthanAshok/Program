#include<iostream>
using namespace std;

class Animals
{   
    private: 
           int a , b , c ;
    public:
           int t , e;

    void setData(int a1 , int b1 , int c1);
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of t is "<<t<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void Animals :: setData(int a1 , int b1 , int c1)      //To tell compiler that i made setdata in Animals.
{ 
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Animals Doggy;
    Doggy.t = 8;
    Doggy.e =  6;
    Doggy.setData(9 , 5 , 7 );
    Doggy.getdata();

    return 0;
}
// #include<iostream>
// using namespace std;

// class Animal
//    {
//     private: 
//         int a , b ,c ;
//     public:
//         int d , e ;
//     void setdata(int a1 , int b1 , int c1);
//     void getdata(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;

//     }         
// };
// void Animal :: setdata(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Animal Dog;
//     Dog.d = 4;
//     Dog.e = 5;
//     Dog.setdata(1, 2 ,3);
//     Dog.getdata();

//     return 0;
// }