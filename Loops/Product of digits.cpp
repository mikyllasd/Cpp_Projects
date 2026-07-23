#include<iostream>
using namespace std;

int main(){

    int num;
    int product = 1;


    cout<<"Enter number: ";
    cin>>num;


    while(num != 0){

        product = product * (num % 10);

        num = num / 10;

    }


    cout<<"Product: "<<product;


    return 0;
}
