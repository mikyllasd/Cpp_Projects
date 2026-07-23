#include <iostream>
using namespace std;

int main() {

    char letter;

    cout << "Enter a character: ";
    cin >> letter;


    if(letter == 'a' || letter == 'e' || letter == 'i' ||
       letter == 'o' || letter == 'u' ||
       letter == 'A' || letter == 'E' || letter == 'I' ||
       letter == 'O' || letter == 'U') {

        cout << "Vowel";
    }
    else {
        cout << "Not a vowel";
    }


    return 0;
}
