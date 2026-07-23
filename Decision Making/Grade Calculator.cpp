#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "Grade: A";
    }
    else if (grade >= 80) {
        cout << "Grade: B";
    }
    else if (grade >= 70) {
        cout << "Grade: C";
    }
    else if (grade >= 60) {
        cout << "Grade: D";
    }
    else if (grade >= 0) {
        cout << "Grade: F";
    }
    else {
        cout << "Invalid grade";
    }

    return 0;
}
