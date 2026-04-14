// CSC 134
// M5HW_Q2 - Silver
// Jordan Bell
// 4/11/26

#include <iostream>

using namespace std;

int main() {
    double width, length, height;

    // Block width
    cout << "Enter the width of the block: ";
    cin >> width;
    if (width <= 0) {
        cout << "Error: Width must be greater than zero." << endl;
        return 1; 
    }

    // Block length
    cout << "Enter the length of the block: ";
    cin >> length;
    if (length <= 0) {
        cout << "Error: Length must be greater than zero." << endl;
        return 1;
    }
    // Height
    cout << "Enter the height of the block: ";
    cin >> height;
    if (height <= 0) {
        cout << "Error: Height must be greater than zero." << endl;
        return 1;
    }

    // Volume calculation
    double volume = width * length * height;

    cout << "The volume of the block is: " << volume << endl;

    return 0;
}
