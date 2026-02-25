// CSC 134
// M3T2 
// Jordan Bell
// 2/25/2025
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;

int main() {

    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, separated by a space or a newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "rectangle, separated by a space or a newline" << endl;
    cin >> widthTwo >> lengthTwo;

    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    cout << "Rectangle one has an area of " << areaOne << endl;
    cout << "Rectangle two has an area of " << areaTwo << endl;

    // find out which one is bigger
    if (areaOne > areaTwo) {
        cout << "Rectangle one is bigger" << endl;
    }

    else if (areaTwo > areaOne) {
        cout << "Rectangle two is bigger" << endl;
    }

    else if (areaOne == areaTwo) {
        cout << "They are the same size" << endl;

    return 0;
}
