#include<iostream>
using namespace std;

int main(){

    int num;
    int original;
    int reverse = 0;


    cout<<"Enter number: ";
    cin>>num;


    original = num;


    while(num != 0){

        int digit = num % 10;

        reverse = reverse * 10 + digit;

        num = num / 10;

    }


    if(original == reverse){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not palindrome number";
    }


    return 0;
}
