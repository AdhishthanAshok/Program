#include<iostream>
using namespace std;

int main(){
    int marks[5] = {10, 20 , 30 , 40 , 50};
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
     cout<<marks[4]<<endl;
     cout<<endl;
     
     cout<<"These marks are obtained in English"<<endl;
    int EnglishMarks[] = {11, 22, 33, 44, 55, 66};
    
     cout<<EnglishMarks[0]<<endl;
     cout<<EnglishMarks[1]<<endl;
     cout<<EnglishMarks[2]<<endl;
     cout<<EnglishMarks[3]<<endl;
     cout<<EnglishMarks[4]<<endl;
     cout<<EnglishMarks[5]<<endl;
     cout<<endl;
     cout<<"This is an eg form For Loop "<<endl;
     cout<<endl; 
    for (int i = 0; i < 6; i++)
    {
        cout<<"The score in English "<<i<<" is "<<EnglishMarks[i]<<endl;
    }

    cout<<endl;
    cout<<"This is an example from Do While loop"<<endl;
    cout<<endl;
    int i = 0;
    do{
        cout<<"The score in English "<<i<<" is "<<EnglishMarks[i]<<endl;
        i++;
    }while(i<=5);
    cout<<endl;   
    
    // while(i<=5){
    //     cout<<"The score in English "<<i<<" is "<<EnglishMarks[i]<<endl;
    //     i++;
    // }
   
   /*POINTERS WITH ARRAYS */

   int* p= EnglishMarks;
    cout<<"The value of '*p' is "<<*(p)<<endl;    
    cout<<"The value of '*p+1' is "<<*(p+1)<<endl;    
    cout<<"The value of '*p+2' is "<<*(p+2)<<endl;    
    cout<<"The value of '*p+3' is "<<*(p+3)<<endl;    
    cout<<"The value of '*p+4' is "<<*(p+4)<<endl; 
    cout<<"The value of '*p+5' is "<<*(p+5)<<endl; 

     return 0;
}