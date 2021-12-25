#include<iostream>
using namespace std;

float moneyRecieved(int currentmoney , float factor= 1.07){
    return currentmoney*factor;
}
int main(){
    int money = 200000;
    cout<<"If you have "<<money<<" in your Bank Account then you will get "<<moneyRecieved(money)
    <<" Rs after 1 year ";
    
 return 0;
}
    