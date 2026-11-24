#include <iostream>
using namespace std;

// Function that demonstrates a memory leak
void createLeak() {

    int* ptr = new int(42);

    cout << "Inside function. The value is: "
         << *ptr << endl;

    cout << "Memory allocated at address: "
         << ptr << endl;

    // Memory is intentionally not deleted here.
    // This demonstrates a memory leak.
}

// Function that fixes the memory leak
void fixLeak() {

    int* ptr = new int(42);

    cout << "\nInside fixed function. Value: "
         << *ptr << endl;

    cout << "Memory allocated at address: "
         << ptr << endl;

    // Free dynamically allocated memory
    delete ptr;

    // Prevent accidental use of the freed pointer
    ptr = nullptr;

    cout << "Memory has been successfully freed." << endl;
}

int main() {

    cout << "--- Testing Memory Leak ---" << endl;

    createLeak();

    cout << "Function finished. The memory is now leaked." << endl;

    cout << "\n--- Testing the Fix ---" << endl;

    fixLeak();

    return 0;
}