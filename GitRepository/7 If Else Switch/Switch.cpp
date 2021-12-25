#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Tell me your Percentage "<<endl;
    cin>>a;

    switch (a)
    {
    case 90:
    cout<<"You are eligible for scholarship "<<endl;
        break;
    case 100:
    cout<<"Full Fee Waiver "<<endl;
        break;
    
    default:
    cout<<"You can get admission "<<endl;
        break;
    }

}