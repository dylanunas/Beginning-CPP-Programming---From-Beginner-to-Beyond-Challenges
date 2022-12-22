#include <iostream>
#include <string>
 
using std::cin;
using std::cout;
using std::endl;
using std::string;
 
int main()
{
    string letter_pyramid{};
    cout << "Enter a string to display a letter pyramid: ";
    getline(cin, letter_pyramid);
 
    string temp_row{};
    for (auto letter : letter_pyramid)
    {
        temp_row.push_back(letter);
 
        string reverse_temp_row(temp_row.rbegin(), temp_row.rend());
        // The latest character taken from letter_pyramid only appears once in the 
        // output, so when printing the reverse string exclude the latest character.
        reverse_temp_row.erase(0, 1);
 
        for (size_t space{}; space < letter_pyramid.size() - temp_row.size(); ++space)
        {
            cout << " ";
        }
 
        for (auto letter : temp_row)
        {
            cout << letter;
        }
 
        if (temp_row.size() > 1)
        {
            cout << reverse_temp_row;
        }
 
        cout << endl;
    }

    cout << endl;

    return 0;
}