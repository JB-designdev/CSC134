// CSC 134
// M2HW_Q3 - Silver
// Jordan Bell
// 2/23/26

#include <iostream>
using namespace std;

int main()
{
    const int SLICES_PER_VISITOR = 3;

    int numPizzas, 
        slicesPerPizza, 
        numVisitors, 
        totalSlices, 
        slicesNeeded, 
        slicesLeft;

    cout << "--- Pizza Party Calculator ---" << endl;
    cout << "How many pizzas did you order? ";
    cin >> numPizzas;
    
    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;
    
    cout << "How many visitors are coming? ";
    cin >> numVisitors;

    totalSlices = numPizzas * slicesPerPizza;
    slicesNeeded = numVisitors * SLICES_PER_VISITOR;
    slicesLeft = totalSlices - slicesNeeded;

    cout << "\nTotal slices available: " << totalSlices << endl;
    cout << "Total slices needed:    " << slicesNeeded << endl;
    
    if (slicesLeft >= 0) {
        cout << "Slices leftover:        " << slicesLeft << endl;
    } else {
        cout << "Warning! You are short " << (slicesLeft * -1) << " slices!" << endl;
    }

    return 0;
}
