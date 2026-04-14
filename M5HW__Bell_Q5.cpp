// CSC 134
// M5HW_Q3 - Silver
// Jordan Bell
// 4/13/26

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double speed;
    int hours;

    // Speed
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    if (speed < 0) {
        cout << "Error: Speed cannot be negative." << endl;
        return 1;
    }

    // Time
    cout << "How many hours has it traveled? ";
    cin >> hours;
    if (hours < 1) {
        cout << "Error: Hours traveled must be at least 1." << endl;
        return 1;
    }

    // Display
    cout << "\nHour   Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    // Use a loop to calculate and display distance for each hour
    for (int i = 1; i <= hours; i++) {
        double distance = speed * i;
        cout << setw(4) << i << "   " << distance << endl;
    }

    return 0;
}
