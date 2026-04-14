// CSC 134
// M5HW_Q3 - Silver
// Jordan Bell
// 4/13/26

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.14159;
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // user choice 1-4
    if (choice == 1) {
        double radius;
        cout << "Enter the circle's radius: ";
        cin >> radius;

        if (radius < 0) {
            cout << "The radius cannot be less than zero." << endl;
        } else {
            double area = PI * radius * radius;
            cout << "The area is " << area << endl;
        }
    } 
    else if (choice == 2) {
        double length, width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "Only enter positive values for length and width." << endl;
        } else {
            double area = length * width;
            cout << "The area is " << area << endl;
        }
    } 
     else if (choice == 3) {
        double base, height;
        cout << "Enter the length of the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;

        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height." << endl;
        } else {
            double area = base * height * 0.5;
            cout << "The area is " << area << endl;
        }
    } 
    else if (choice == 4) {
        cout << "Program ending." << endl;
    } 
    else {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
    }

    return 0;
}
