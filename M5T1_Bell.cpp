// CSC 134
// M5T1
// Jordan Bell
// 3/23/26

#include <iostream>
#include <string>
using namespace std;

// declare our functions
string formatAnswer(int answer);
void printAnswer(string msg);
int main() {
 int answer = 5;
 string message;
 message = formatAnswer(answer);
 printAnswer(message);
 return 0;
}

string formatAnswer (int answer) {
 // Make a nice looking string containing the answer
 string answerMessage;
 answerMessage = "The answer is ";
 answerMessage += to_string(answer);
 return answerMessage;
}
void printAnswer(string msg) {
 // display our message
 cout << msg << endl;
}
