#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "\n-----------------------------------------" << endl;
    cout << "Welcome to Sal's Change Converter" << endl;
    cout << "\nPlease enter an integer that represent how many cents you have: ";
    int user_cents {0};
    cin >> user_cents;
    cout << "\nYou entered: " << user_cents << " cents" << endl;
    cout << "\n---------------------Change Converter--------------------" << endl;
    cout << "You can provide this change as follows:" << endl;
    
// initalize all values to 0 except balance, as that is equal to the user input
    int dollars {0} , quarters {0}, dimes {0}, nickles {0}, pennies {0}, balance {user_cents};
    
// constant values for american dollars
    const int dollars_cents {100} , quarters_cents {25}, dimes_cents {10}, nickles_cents {5}, pennies_cents {1};
    
// find how much dollars (100 cents) are in the user value and subtract the remainder from the balance
    dollars = user_cents / dollars_cents;
    balance %= dollars_cents;

// find how much quarters (25 cents) are in the user value and subtract the remainder from the balance
    quarters = balance / quarters_cents;
    balance %= quarters_cents;

// find how much dimes (10 cents) are in the user value and subtract the remainder from the balance
    dimes = balance / dimes_cents;
    balance %= dimes_cents;

// find how much nickles (5 cents) are in the user value and subtract the remainder from the balance
    nickles = balance / nickles_cents;
    balance %= nickles_cents;

// find how much pennies (1 cent) are in the user value.
    pennies = balance / pennies_cents;
    
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;
    
    cout <<endl;
    return 0;
}

