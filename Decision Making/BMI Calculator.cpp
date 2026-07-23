#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight";
    }
    else if (bmi < 25) {
        cout << "Normal weight";
    }
    else if (bmi < 30) {
        cout << "Overweight";
    }
    else {
        cout << "Obese";
    }

    return 0;
}
