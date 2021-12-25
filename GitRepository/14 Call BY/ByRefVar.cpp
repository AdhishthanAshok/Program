#include<iostream>
using namespace std;

/*This is called BY REFERENCE VARIABLES....


*/
// void swapreferenceVariable(int &a , int &b){ /*Formal Arguments*/
//     int temp = a;
//     a = b ;
//     b = temp;
// }
// int main(){
//     int x = 99 ,y = 101;
//     cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
//     swapreferenceVariable(x,y); //Actual Arguments
//     cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
//     return 0;
// }

/* &-->>Reference to.... */
int & swapreferenceVariable(int &a , int &b){ /*Formal Arguments*/
    int temp = a;
    a = b ;
    b = temp;
    return b ;
} 
int main(){
    int x = 99 ,y = 101;
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
    swapreferenceVariable(x,y) = 999 ; //Actual Arguments
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<"."<<endl;
    return 0;
}
/*CHAIN is.....
    int variable swaprefVariable--->&b--->return b--->999; 
*/

    
    