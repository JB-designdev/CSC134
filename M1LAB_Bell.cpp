// CSC 134
// M1LAB
// Jordan Bell
// 2/1/26

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // Jane Smith
    string name = "Jordan Bell";
    // number of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;

    // calculate total price of the apples double totalPrice = (double) apples * pricePerApple;

    cout << "Welcome to " << name;
    cout << " 's apple orchard." <<endl;
    cout << "We have " << apples;
    cout << "apples in stock" << endl;
    cout << "Apples are currently $";
    cout << totalPrice << " each." << endl;

    cout << "If you want them all, that will be $" << totalPrice * apples << endl;
}
