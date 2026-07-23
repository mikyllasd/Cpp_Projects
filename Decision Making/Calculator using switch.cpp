#include <iostream>
using namespace std;

int main() {

    char operation;
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+ - * /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;


    switch(operation) {

        case '+':
            cout << "Answer: " << num1 + num2;
            break;

        case '-':
            cout << "Answer: " << num1 - num2;
            break;

        case '*':
            cout << "Answer: " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Answer: " << num1 / num2;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid operator";
    }


    return 0;
}
