// CSC 134
// M3HW_Q3 - Silver
// Jordan Bell
// 3/9/26

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice1, choice2;

    cout << "You find yourself at the entrance of a dark cave." << endl;
    cout << "Do you (1) Enter the cave or (2) Run away? ";
    cin >> choice1;

    if (choice1 == 1) {
        // Path to the second choice
        cout << "\nYou step inside and find a giant sleeping dragon guarding treasure!" << endl;
        cout << "Do you (1) Sneak past it or (2) Try to fight it? ";
        cin >> choice2;

        if (choice2 == 1) {
            // Victory
            cout << "\nYou successfully grab the treasure and sneak out. VICTORY!" << endl;
        } 
        else {
            // Defeat (Choice 2)
            cout << "\nThe dragon wakes up and burns you to a crisp. DEFEAT!" << endl;
        }
    } 
    else if (choice1 == 2) {
        // Game Over (Choice 1)
        cout << "\nYou trip on a rock while running away and fall. GAME OVER." << endl;
    } 
    else {
        cout << "\nThat wasn't an option! The world ends from your indecision." << endl;
    }

    return 0;
}
