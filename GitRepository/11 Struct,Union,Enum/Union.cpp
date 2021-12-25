#include<iostream>
using namespace std;   

typedef union IndianMoney
{
    int currency ;
    char notename  ;
    double Under1 ;
}ep;

int main(){
    ep carrot;
    // carrot.currency= 3;
    // carrot.notename= 'A' ;
    carrot.Under1= 3.2 ;
    // cout<<carrot.currency<<endl;
    // cout<<carrot.notename<<endl;
    cout<<carrot.Under1<<endl;
        
    return 0;
}