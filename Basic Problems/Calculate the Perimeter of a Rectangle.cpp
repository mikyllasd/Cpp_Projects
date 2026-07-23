#include<iostream>
using namespace std;

int main(){
    double length, width, perimeter;

    cout<<"Enter length: ";
    cin>>length;

    cout<<"Enter width: ";
    cin>>width;

    perimeter = 2 * (length + width);

    cout<<"The perimeter of a rectangle is: "<<perimeter;

return 0;
}
