#include<iostream>
using namespace std;

// normal sum of two numbers.....
float sum(int a , int b){;
    return a + b;
}
// Volume of cuboid  
int volume(int a , int b , int c){
    return (a*b*c);
}

// Vollume of Cube
int volume(int a){
    return (a*a*a);
}

//Volume of Cylinder 
double volume(double r, int h ){
    return (3.14 * r * r * h);
}
int main(){
    cout<<"This sum of 99 and 99 is "<<sum(99,99)<<endl;
    cout<<"The Volume of Cube of side 6 is "<<volume(6)<<". "<<endl;  
    cout<<"The Volume of Cylinder of lenght 6 and height 7 is "<<volume(6 , 7)<<". "<<endl;  
    cout<<"The Volume of Cuboid of lenght 5 , breadth 6 and height 7 is "<<volume(5 , 6 , 7)<<". "<<endl;
    // Here we just divide the result of the Cylinder with 3 to get the Volume of a cone
    cout<<"The Volume of Cone of radius 6 and height 7 is "<<volume(6 , 7)/3<<". "<<endl;  
    return 0;
}
// This is the example of a Fuction Overloading.
/* When one or more Function appers with one name and Co piler perform actions on its own.
..This is also the Pro of C++ language....*/