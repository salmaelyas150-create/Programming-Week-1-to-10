#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Create a pointer to the first array element
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    // Traverse the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {

        cout << "Value: " << *ptr << endl;

        ptr++;
    }

    // Reset pointer to the beginning
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {

        cout << "Index " << i
             << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}