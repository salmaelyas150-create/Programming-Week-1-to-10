
#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    bool hasParent;

    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have a ticket? (1=yes, 0=no): ";
    cin >> hasTicket;

    cout << "Are you a member? (1=yes, 0=no): ";
    cin >> isMember;

    cout << "Are you banned? (1=yes, 0=no): ";
    cin >> isBanned;

    cout << "Do you have a parent? (1=yes, 0=no): ";
    cin >> hasParent;

    bool canEnter =
        ((age >= 18 || (age < 16 && hasParent)) &&
        hasTicket && !isBanned)
        || (isMember && !isBanned);

    if (canEnter) {
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }

    return 0;
}
