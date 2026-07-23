#include<iostream>
using namespace std;

int main(){
    double principal, rate, time, SI;

    cout<<"Enter principal: ";
    cin>>principal;

    cout<<"Enter time: ";
    cin>>time;

    cout<<"Enter rate: ";
    cin>>rate;

    SI = (principal * rate * time) / 100;

    cout<<"The SI is: "<< SI;

return 0;
}
