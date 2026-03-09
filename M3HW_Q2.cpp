// CSC 134
// M3HW_Q2 - Silver
// Jordan Bell
// 3/9/26

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string meal_name = "Lasagna";
    int num_meals;
    int order_type;
    double meal_price = 5.99;
    double sub_total;
    double tax_rate = 0.08;
    double tip_amount = 0.0;
    double tax_amount;
    double total_price;

    cout << "Welcome to the CSC 134 Restaurant!" << endl;
    cout << "Today's Special: " << meal_name << " ($" << meal_price << ")" << endl;
    
    cout << "How many orders of " << meal_name << " would you like? ";
    cin >> num_meals;

     cout << "Is this order (1) Dine-in or (2) Takeaway? ";
    cin >> order_type;

    sub_total = meal_price * num_meals;

    if (order_type == 1) {
        tip_amount = sub_total * 0.15;
    }

    tax_amount = sub_total * tax_rate;
    total_price = sub_total + tip_amount + tax_amount;

    cout << setprecision(2) << fixed;
    cout << "\nYOUR ORDER\n-----------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << sub_total << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    
    if (tip_amount > 0) {
        cout << "Tip (15%): \t\t$" << tip_amount << endl;
        }
    
    cout << "Tax (8%): \t\t$" << tax_amount << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl;
    cout << "THANK YOU COME AGAIN!" << endl;

    return 0;
}
