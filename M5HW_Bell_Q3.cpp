// CSC 134
// M5HW_Q3 - Silver
// Jordan Bell
// 4/13/26

#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Error: The number must be between 1 and 10." << endl;
    } else {
        string roman;
        
        // Roman numerals
        switch (number) {
            case 1:  roman = "I";    break;
            case 2:  roman = "II";   break;
            case 3:  roman = "III";  break;
            case 4:  roman = "IV";   break;
            case 5:  roman = "V";    break;
            case 6:  roman = "VI";   break;
            case 7:  roman = "VII";  break;
            case 8:  roman = "VIII"; break;
            case 9:  roman = "IX";   break;
            case 10: roman = "X";    break;
        }

        cout << "The Roman numeral version is: " << roman << endl;
    }

    return 0;
}
