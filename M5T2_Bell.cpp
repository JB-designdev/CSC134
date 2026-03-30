// CSC 134
// M5T1
// Jordan Bell
// 3/23/26

#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

void printAnswerLine(int num, int squaredNum) {
    cout << num << " squared is: " << squaredNum << endl;
}

int main() {
    int count = 1; // start at 1
    int result;

    // loop goes from 1 to 10
    while (count <= 10) {
        // Use the square function to get the value
        result = square(count);
        
        // print line
        printAnswerLine(count, result);
        
        count++;
    }

    return 0;
}
