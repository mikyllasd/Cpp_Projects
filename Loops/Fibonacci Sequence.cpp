#include<iostream>
using namespace std;

int main(){

    int n;

    int first = 0;
    int second = 1;
    int next;

    cout<<"Enter terms: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        cout<< first << " ";
        next = first + second;
        first = second;
        second = next;
    }

return 0;
}
