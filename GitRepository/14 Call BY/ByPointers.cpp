#include<iostream>
using namespace std;

/*void swap(int a , int b){  //temp  a  b    Formal Arguments in => ()
    int temp = a;          // 4    4  5 
    a = b;                 // 4    5  5
    b = temp;              // 4    5  4
}
    /* Here the values WILL NOT swap because the Actual argument will be just copied inside the
     formal argument......
    Analog for Understanding.....
     If we share a song to a phone and then made a edit on that phone ....that will not
     affect the same song in our phone........ 
     and THIS WILL NOT WORK!!
    */
   /*Correct method will be displayed and 
     here we have to mention the adress of the variable through POINTERS*/ 

    /*This is called.....
    Call BY Pointers!!!! 
    */

     void swapPointers(int* a , int* b){  
    int temp = *a;           
    *a = *b;                 
    *b = temp;   
     }           
int main(){
    int x = 4 ,y = 5;
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
    swapPointers(&x,&y); //Actual Arguments
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
    return 0;
}/*Here the values will be swaped .....we have to use pointers method of mentioning 
    adress*/