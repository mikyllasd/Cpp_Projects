#include <iostream>
using namespace std;

int main() {

    char letter;

    cout << "Enter a character: ";
    cin >> letter;


    if(letter >= 'A' && letter <= 'Z') {
        cout << "Uppercase";
    }
    else if(letter >= 'a' && letter <= 'z') {
        cout << "Lowercase";
    }
    else {
        cout << "Not an alphabet";
    }


    return 0;
}
