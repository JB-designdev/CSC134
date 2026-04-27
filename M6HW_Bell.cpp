// CSC 134
// M6HW - Silver
// Jordan Bell
// 4/16/26

#include <iostream>
#include <string>

using namespace std;

// key item
bool hasKey = false;

// Desert, Cave, Treasure Room
void desert();
void cave();
void treasureRoom();

int main() {
    cout << "Welcome to the Adventure Game!\n";
    desert(); // Start the game
    return 0;
}

void desert() {
    int choice;
    cout << "\n--- THE DESERT ---\n";
    cout << "There's a sign that says : 'Find the hidden key to unlock the vault.'\n";
    cout << "1. Enter the desert cave.\n";
    cout << "2. Search the sand.\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        cave();
    } else if (choice == 2) {
        cout << "You found a magical key!\n";
        hasKey = true;
        desert(); // Stay in desert
    } else {
        cout << "Invalid choice.\n";
        desert();
    }
}

void cave() {
    int choice;
    cout << "\n--- THE CAVE ---\n";
    cout << "It's hot and dry. There is a mystical looking door here.\n";
    cout << "1. Go back into the desert.\n";
    cout << "2. Try to open the door.\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        desert();
    } else if (choice == 2) {
        if (hasKey) {
            treasureRoom();
        } else {
            cout << "The door is locked. You will need a key.\n";
            cave();
        }
    }
}
void treasureRoom() {
    cout << "\n--- THE TREASURE ROOM ---\n";
    cout << "The door opens... You found the gold! You win!\n";
}
