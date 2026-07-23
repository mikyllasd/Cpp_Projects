#include<iostream>
using namespace std;

int main(){
    int num;
    int factorial = 1;

    cout<<"Enter number: ";
    cin>>num;

    for(int i=1; i <=num; i++){
        factorial = factorial*i;
    }
        cout<<"Factorial: "<<factorial;

return 0;
}
