// CSC 134
// M3HW_Q1 - Silver
// Jordan Bell
// 3/4/26

#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    
    cin >> answer;

    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } 
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } 
    else {
        cout << "If you're not sure… that's OK." << endl;
    }

    return 0;
}
