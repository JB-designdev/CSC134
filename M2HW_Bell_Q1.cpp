// CSC 134
// M2HW_Q1 - Silver
// Jordan Bell
// 2/23/26

#include <iostream>
#include <string>
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   
using namespace std;

int main() {
    string name;
    double startBalance, deposit, withdrawal, finalBalance;
    
    // Seed the random number generator for the account number
    srand(static_cast<unsigned int>(time(0)));
    int accountNumber = rand() % 900000 + 100000; // Generates a 6-digit number

    cout << "--- Bank Account Simulation ---" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter starting account balance ($): ";
    cin >> startBalance;
    
    cout << "Enter amount of deposit ($): ";
    cin >> deposit;
    
    cout << "Enter amount of withdrawal ($): ";
    cin >> withdrawal;

    finalBalance = startBalance + deposit - withdrawal;

    cout << "\n--- Account Transaction Summary ---" << endl;
    cout << "Name on the account:   " << name << endl;
    cout << "Account number:        " << accountNumber << endl;
    
    cout << fixed << setprecision(2);
    cout << "Final account balance: $" << finalBalance << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
