#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";

    const double smRoomCost {25};
    const double lRoomCost {35};
    const double tax {0.06};
    const int estimate_expiry {30};
    double cost {0};
    int amtSmRooms {0}, amtLRooms{0};

    cout << "How many small rooms would you like to be cleaned? ";
    cin >> amtSmRooms;
    cout << "How many large rooms would you like to be cleaned? ";
    cin >> amtLRooms;

    cost = (amtSmRooms * smRoomCost) + (amtLRooms * lRoomCost);

    cout << "\nEstimate for carpet cleaning service\n"
    << "Number of small rooms: " << amtSmRooms << "\n"
    << "Number of large rooms: " << amtLRooms << "\n"
    << "Price per small room: $" << smRoomCost << "\n"
    << "Price per large room: $" << lRoomCost << "\n"
    << "Cost: $" << cost << "\n"
    << "Tax: $" <<  cost * tax << "\n"
    << "========================================\n"
    << "Total estimate: $" << cost + (cost * tax) << "\n"
    << "This estimate is valid for " << estimate_expiry << " days\n\n" << endl;

    return 0;
}