#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// FUNCTION PROTOTYPES:

// Outputs all the options the user can choose from.
void chooseSelection(vector <int> &numList);

// Prints all the numbers in a vector
void printNumList(const vector<int> &numList);

// Adds a number to the vector
void addNum(vector<int> &numList);

// Calculates and prints the mean/average of all the numbers in the vector
void calcMean(vector<int> &numList);

// Finds and prints the smallest number in the vector
void printSmallestNum(const vector<int> &numList);

// Finds and prints the largest number in the vector
void printLargestNum(const vector<int> &numList);

int main()
{
    vector<int> numbers;

    chooseSelection(numbers);
   
    return 0;
}

// Outputs all the options the user can choose from.
void chooseSelection(vector<int> &numList)
{
    char selection {' '};
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

        switch (selection)
        {
        case 'p':
        case 'P':
            printNumList(numList);
            break;
        case 'a':
        case 'A':
            addNum(numList);
            break;
        case 'm':
        case 'M':
            calcMean(numList);
            break;
        case 's':
        case 'S':
            printSmallestNum(numList);
            break;
        case 'l':
        case 'L':
            printLargestNum(numList);
            break;
        case 'q':
        case 'Q':
            cout << "Goodbye, have a great day!" << endl;
            break;
        default:
            cout << "Please enter a valid input! (p/a/m/s/l/q)" << endl;
            break;
        }
    } while (selection != 'q' && selection != 'Q');

    return;
}

// Prints all the numbers in a vector
void printNumList(const vector<int> &numList)
{
    if (numList.size() > 0)
    {
        cout << "[";
        for (int num : numList)
        {
            cout << ' ' << num;
        }
        cout << " ]" << endl;
    }
    else
    {
        cout << "[] - the list is empty" << endl;
    }

    return;
}

// Adds a number to the vector
void addNum(vector<int> &numList)
{
    int addNum {0};
    cout << "Add a number to the list: ";
    cin >> addNum;
    numList.push_back(addNum);
    cout << addNum << " Has been added to the list!" << endl;

    return;
}

// Calculates and prints the mean/average of all the numbers in the vector
void calcMean(vector<int> &numList)
{
    if (numList.size() == 0)
    {
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else
    {
        double sum {0};

        for (int num : numList)
        {
            sum += num;
        }
        cout << "The mean of the numbers is: " << sum / numList.size() << endl;
    }
    return;
}

// Finds and prints the smallest number in the vector
void printSmallestNum(const vector<int> &numList)
{
    if (numList.size() > 0)
    {
        int smallestNum = {numList.at(0)};
        for (int num : numList)
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
    return;
}

// Finds and prints the largest number in the vector
void printLargestNum(const vector<int> &numList)
{
    if (numList.size() > 0)
    {
        int largestNum = {numList.at(0)};
        for (int num : numList)
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
    return;
}