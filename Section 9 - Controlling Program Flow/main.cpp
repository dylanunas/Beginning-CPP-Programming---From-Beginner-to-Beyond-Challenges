#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    char selection {0};
    vector<int> numbers;

    do {
        cout << "\nP - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display the mean of the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit the program\n"
        << "Selection: ";
        cin >> selection;
        cout << "\n";

        if (selection == 'p' || selection == 'P')
        {
            if (numbers.size() > 0)
            {
                cout << "[";
                for (int num : numbers)
                {
                    cout << ' ' << num;
                }
                cout << " ]" << endl;
            }
            else
            {
                cout << "[] - the list is empty" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            int addNum {0};
            cout << "Add a number to the list: ";
            cin >> addNum;
            numbers.push_back(addNum);
            cout << addNum << " Has been added to the list!" << endl;
        }
        else if (selection == 'm' || selection == 'M')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                double sum {0};

                for (int num : numbers)
                {
                    sum += num;
                }
                cout << "The mean of the numbers is: " << sum / numbers.size() << endl;
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (numbers.size() > 0)
            {
                int smallestNum = {numbers.at(0)};
                for (int num : numbers)
                {
                    if (num < smallestNum)
                    {
                        smallestNum = num;
                    }
                }
                cout << "The smallest number in the list is: " << smallestNum << endl;
            }
            else
            {
                cout << "There are no numbers in the list.\n" << endl;
            }
        }
        else if (selection == 'l' || selection == 'L')
        {
            if (numbers.size() > 0)
            {
                int largestNum = {numbers.at(0)};
                for (int num : numbers)
                {
                    if (num > largestNum)
                    {
                        largestNum = num;
                    }
                }
                cout << "The smallest number in the list is: " << largestNum << endl;
            }
            else
            {
                cout << "There are no numbers in the list.\n" << endl;
            }
        }
        else
        {
            cout << "Unknown selection - please try again!" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    cout << "Goodbye! Have a great day!" << endl;
    return 0;
}
