// CSC 134
// M3LAB1
// Jordan Bell
// 2/25/26

#include <iostream>
using namespace std;

int main() {

  string choice; 

  cout << "Which pathway do you choose? (Left/Right): " << endl;
  cout << "Type Left or Right: "; 
  cin >> choice;


  if (choice == "Left") {
  	cout << "You chose Left Path" << endl;
  }
  else if (choice == "Right") {
  	cout << "You chose Right Path" << endl;
  }
  else {
  	cout << "I'm sorry, that is not an option." << endl;
  }

  cout << "Thanks for playing!" << endl;
  return 0;

}
