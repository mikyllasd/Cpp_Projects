#include<iostream>
using namespace std;

int main(){
    double fahrenheit, celsius;

    cout<<"Enter temperature in fahrenheit: ";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;

    cout<<"The temperature in celsius: "<<celsius;

return 0;
}
