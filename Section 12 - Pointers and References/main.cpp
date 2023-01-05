#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Prototypes:

void print(const int arr[], const int size);

int *applyAll(const int arr1[], const int size1, const int arr2[], const int size2);

int main() {

    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, 5);

    cout << "Array 2: ";
    print(array2, 3);

    int *results = applyAll(array1, 5, array2, 3);
    cout << "Result ";
    print(results, 15);
    delete [] results;

    cout << endl;
    return 0;
}

void print(const int arr[], const int size)
{
    cout << "[ ";
    for (int i {0}; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << "]" << endl;

    return;
}

int *applyAll(const int arr1[], const int size1, const int arr2[], const int size2)
{
    int *newArr {new int [size1 * size2]};
    int count {0};

    for (int i {0}; i < size2; i ++)
    {
        for (int j {0}; j < size1; j++) 
        {
            if (count < size1 * size2)
            {
                *(newArr + count) = arr1[j] * arr2[i];
                count++;
            }
        }
    }

    return newArr;
}