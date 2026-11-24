
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "MENU" << endl;
    cout << "1. Start" << endl;
    cout << "2. Load" << endl;
    cout << "3. Settings" << endl;
    cout << "4. Exit" << endl;
    cout << "Choice: ";

    cin >> choice;

    if (choice == 1) {
        cout << "Starting game..." << endl;
    }
    else if (choice == 2) {
        cout << "Loading game..." << endl;
    }
    else if (choice == 3) {
        cout << "Opening settings..." << endl;
    }
    else if (choice == 4) {
        cout << "Exiting..." << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
