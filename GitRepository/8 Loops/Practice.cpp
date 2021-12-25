#include<iostream>
using namespace std;

int main(){
     
    /* This is example of For Loop */

     for(int i = 0; i<10; i++)
     {
         cout<<i<<endl;
     }

    /* This is an example of While loop*/

    int i = 1;
    while(i<11){
        cout<<i<<endl;
        i++;
    }
    
    cout<<endl; 
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
    cout<<endl;
    /* This is an example of Do While loop */
    int n = 8;
    i = 1;
    do{
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}








