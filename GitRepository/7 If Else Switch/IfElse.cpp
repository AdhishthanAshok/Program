#include<iostream>
using namespace std;

int main(){
    int a;
     cout<<"Tell me your Percentage : "<<endl;
     cin>>a;
     
     if (a<33){
         cout<<"You can not move to class 12th "<<endl;;
     }  
     else if (a==33){
         cout<<"You have to give exam again "<<endl;
     }   
     else {
        cout<<"You can move to class 12th "<<endl; 
     }
return 0;
}