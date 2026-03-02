// CSC 134
// M3LAB1
// Jordan Bell
// 3/2/26

#include <iostream>
using namespace std;

int main() {
    double grade;

    cout << "Enter the numerical grade (0-100): ";
    cin >> grade;

    // use && (AND) to check if the grade is between two values
    if (grade >= 90 && grade <= 100) {
        cout << "Letter Grade: A" << endl;
    } 
    else if (grade >= 80 && grade < 90) {
        cout << "Letter Grade: B" << endl;
    } 
    else if (grade >= 70 && grade < 80) {
        cout << "Letter Grade: C" << endl;
    } 
    else if (grade >= 60 && grade < 70) {
        cout << "Letter Grade: D" << endl;
    } 
    else if (grade >= 0 && grade < 60) {
        cout << "Letter Grade: F" << endl;
    } 
    else {
        // stop wrong inputs that won't work
        cout << "Error: Invalid grade entered." << endl;
    }

    return 0;
}
