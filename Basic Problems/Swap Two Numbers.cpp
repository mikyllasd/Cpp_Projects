#include<iostream>
using namespace std;

int main(){
    int a, b, temp;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nSwapped"<<endl;
    cout<<"First Number: "<<a<<endl;
    cout<<"Second Number: "<<b<<endl;

return 0;
}
