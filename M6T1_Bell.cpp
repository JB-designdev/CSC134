// CSC 134
// M6T1
// Jordan Bell
// 4/15/26

#include <iostream>
#include <string>
using namespace std;

// Function Declarations
void part1();
void part2();

// main
int main() {
    part1();
    cout << endl; // spacing between parts
    part2();

    return 0;
}

// Part 1 using loop and no arrays
void part1() {
    cout << "--- Part 1: Car Counter (No Arrays) ---" << endl;
    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int total = 0;

    while (count < SIZE) {
        cout << "Enter cars for day " << count << ": ";
        cin >> cars_today;
        total += cars_today;
        count++;
    }

    double average = (double)total / SIZE;
    cout << "Total Cars: " << total << endl;
    cout << "Average per Day: " << average << endl;
}

// Part 2 using loop and arrays
void part2() {
    cout << "--- Part 2: Car Counter (With Arrays) ---" << endl;
    const int SIZE = 5;
    string days[SIZE] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[SIZE]; 
    int total = 0;

    // Input
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter cars for " << days[i] << ": ";
        cin >> cars[i];
        total += cars[i];
    }

    // Output
    cout << "\nDay\t\tCars" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t\t" << cars[i] << endl;
    }

    double average = (double)total / SIZE;
    cout << "--------------------" << endl;
    cout << "Total: \t\t" << total << endl;
    cout << "Average: \t" << average << endl;
