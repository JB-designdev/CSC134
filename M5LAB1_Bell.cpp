// CSC 134
// M5T1
// Jordan Bell
// 3/30/26

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_explore_garden(); // added a new story branch

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "\n--- Main Menu ---" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        choice_front_door();
    } else if (2 == choice) {
        choice_back_door(); // Part 1: Added for option 2
    } else if (3 == choice) {
        choice_go_home();   // Part 1: Added for option 3
    } else if (4 == choice) {
        cout << "Ok, quitting game." << endl;
        return; 
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.clear();            
        cin.ignore(100, '\n');  
        main_menu();            
    }
}

void choice_front_door() {
    cout << "\nThe front door is heavy oak and locked tight." << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;
    
    if (1 == choice) {
        choice_back_door();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_back_door() {
    cout << "\nYou sneak to the back and find a cracked window." << endl;
    cout << "1. Climb through the window" << endl;
    cout << "2. Check the overgrown garden instead" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;
    
    if (1 == choice) {
        cout << "You're inside the kitchen! It smells like old soup..." << endl;

    } else {
        choice_explore_garden();
    }
}

void choice_go_home() {
    cout << "\nYou decide this isn't worth the trouble." << endl;
    cout << "You walk back to your car and leave the spooky house behind." << endl;
    cout << "Safe... for now." << endl;
}

// added new story
void choice_explore_garden() {
    cout << "\nThe garden is full of bright flowers, roses and dandelions and there is stone statue." << endl;
    cout << "One of the statues seems to be watching you..." << endl;
    cout << "1. Run back to the front of the house" << endl;
    cout << "2. Poke the statue" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;
    
    if (1 == choice) {
        main_menu();
    } else {
        cout << "The statue was actually a very still monster! It growls at you." << endl;
        choice_go_home();
    }
}
