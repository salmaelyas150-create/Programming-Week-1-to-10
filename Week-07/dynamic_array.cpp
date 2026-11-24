#include <iostream>
using namespace std;

// Dynamic Array class
class DynamicArray {

private:

    int* data;
    int size;
    int capacity;

public:

    // Constructor
    DynamicArray(int initialCapacity) {

        if (initialCapacity <= 0) {
            initialCapacity = 2;
        }

        capacity = initialCapacity;

        size = 0;

        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {

        delete[] data;

    }

    // Add a new element
    void push_back(int value) {

        // Check whether the array is full
        if (size == capacity) {

            // Save the old capacity
            int oldCapacity = capacity;

            // Double the capacity
            int newCapacity = capacity * 2;

            // Allocate a bigger array
            int* newData = new int[newCapacity];

            // Copy old elements
            for (int i = 0; i < size; i++) {

                newData[i] = data[i];

            }

            // Delete old array
            delete[] data;

            // Update pointer and capacity
            data = newData;

            capacity = newCapacity;

            cout << "[Resized capacity from "
                 << oldCapacity << " to "
                 << capacity << "]" << endl;
        }

        // Insert new value
        data[size] = value;

        size++;
    }

    // Display array contents
    void display() {

        cout << "Array (Size: " << size
             << ", Capacity: " << capacity << "): ";

        for (int i = 0; i < size; i++) {

            cout << data[i] << " ";

        }

        cout << endl;
    }
};

int main() {

    // Create array with initial capacity of 2
    DynamicArray myArray(2);

    cout << "Created dynamic array with capacity 2."
         << endl;

    // Add first two elements
    myArray.push_back(10);

    myArray.push_back(20);

    myArray.display();

    // Add third element
    cout << "\nAdding third element..." << endl;

    myArray.push_back(30);

    myArray.display();

    // Add fourth and fifth elements
    cout << "\nAdding fourth and fifth elements..."
         << endl;

    myArray.push_back(40);

    myArray.push_back(50);

    myArray.display();

    return 0;
}