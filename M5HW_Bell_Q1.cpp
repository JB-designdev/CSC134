// CSC 134
// M5HW_Q1 - Silver
// Jordan Bell
// 4/11/26

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // 1st month
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    // 2nd month
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;
    
    // 3rd month
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    // Average the 3 months
    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "\nThe average rainfall for " << month1 << ", " << month2 
         << ", and " << month3 << " is " << average << " inches." << endl;

    return 0;
}
