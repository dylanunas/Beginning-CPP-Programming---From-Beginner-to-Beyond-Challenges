#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int dollar {100}, quarter {25}, dime {10}, nickel {5};
    int pennies {0};

    cout << "Enter an amount of money you have in pennies";
    cin >> pennies;

    cout << "\nYou can provide this change as follows:\n";

    cout << "Dollars: " << pennies / dollar << "\n";
    pennies %= dollar;
    
    cout << "Quarters: " << pennies / quarter << "\n";
    pennies %= quarter;

    cout << "Dimes: " << pennies / dime << "\n";
    pennies %= dime;

    cout << "Nickels: " << pennies / nickel << "\n";
    pennies %= nickel;

    cout << "Pennies: " << pennies << endl;

    return 0;
}