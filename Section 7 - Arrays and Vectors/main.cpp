#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector 1 Elements: " << vector1.at(0) << " " << vector1.at(1) << "\n"
    << "Size of vector1: " << vector1.size() << "\n"
    << "Vector 2 Elements: " << vector2.at(0) << " " << vector2.at(1) << "\n"
    << "Size of vector2: " << vector2.size() << endl;

    vector<vector<int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "Vector 2D Elements: " << vector2d.at(0).at(0) << " " 
    << vector2d.at(0).at(1) << endl;

    cout << "                    " << vector2d.at(1).at(0) << " " 
    << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "Vector 2D Elements: " << vector2d.at(0).at(0) << " " 
    << vector2d.at(0).at(1) << endl;

    cout << "                    " << vector2d.at(1).at(0) << " " 
    << vector2d.at(1).at(1) << endl;

    cout << "Vector 1 Elements: " << vector1.at(0) << " " << vector1.at(1) << "\n"
    << "Size of vector1: " << vector1.size() << "\n";

    // When we assign vector 1 to the vector 2d array, we only assigned the values 
    // before they get changed. To see the 1000 value inside the 2d array we must 
    // assign vector 1 to the 2d array again.

    return 0;
}