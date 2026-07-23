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

        int factorial = 1;


        for(int i = 1; i <= digit; i++){
            factorial = factorial * i;
        }


        sum = sum + factorial;


        num = num / 10;

    }


    if(sum == original){
        cout<<"Strong number";
    }
    else{
        cout<<"Not strong number";
    }


    return 0;
}
