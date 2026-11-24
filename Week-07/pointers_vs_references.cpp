#include <iostream>
using namespace std;

int main() {

    // Normal integer variable
    int originalValue = 100;

    // Reference variable
    int& refValue = originalValue;

    // Pointer variable
    int* ptrValue = &originalValue;

    cout << "--- Initial State ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 1
    refValue = 200;

    cout << "\n--- After setting refValue = 200 ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 2
    *ptrValue = 300;

    cout << "\n--- After setting *ptrValue = 300 ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;

    // Modification 3
    int anotherValue = 500;

    ptrValue = &anotherValue;

    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;

    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    return 0;
}