// CSC 134
// M5T1
// Jordan Bell
// 3/30/26

#include <iostream>
#include <iomanip>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length, width, area;

    // get rectangle length
    length = getLength();

    // get rectangle width
    width = getWidth();

    // rectangle area
    area = getArea(length, width);

    // all values of rectangle
    displayData(length, width, area);

    return 0;
}

double getLength() {
    double len;
    cout << "Enter the rectangle's length: ";
    cin >> len;
    return len;
}

double getWidth() {
    double wid;
    cout << "Enter the rectangle's width: ";
    cin >> wid;
    return wid;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "\n----------------------------" << endl;
    cout << "   All of the Rectangle Data" << endl;
    cout << "----------------------------" << endl;
    cout << left << setw(15) << "Length:" << length << endl;
    cout << left << setw(15) << "Width:"  << width << endl;
    cout << left << setw(15) << "Area:"   << area << endl;
    cout << "----------------------------" << endl;
}
