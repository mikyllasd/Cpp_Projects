#include<iostream>
using namespace std;

int main(){

    int num;
    int original;
    int sum = 0;


    cout<<"Enter number: ";
    cin>>num;


    original = num;


    while(num != 0){

        int digit = num % 10;

        sum = sum + (digit * digit * digit);

        num = num / 10;

    }


    if(sum == original){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }


    return 0;
}
