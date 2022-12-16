#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int faveNum {0};
    cout << "Enter your favourite number: ";
    cin >> faveNum;
    cout << "Amazing!! That's my favourite number too!\n";
    cout << "No really!!, " << faveNum << " is my favourite number!" << endl;
    return 0;
}
