// CSC 134
// M4HW1_Q1 - Silver
// Jordan Bell
// 3/17/26

#include <iostream>
using namespace std;

int main() {
    int userNum;
    int i = 1; 
    int answer;

    // Ask for the input
    cout << "Enter a number from 1 to 12: ";
    cin >> userNum;

    while (i <= 12) {
        answer = userNum * i;
        cout << userNum << " times " << i << " is " << answer << endl;
        i++; 
    }

    return 0;
}
