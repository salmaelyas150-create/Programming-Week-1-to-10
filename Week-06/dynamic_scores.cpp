#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

    int size;

    cout << "How many student scores do you want to enter? ";
    cin >> size;

    if (size <= 0) {
        cout << "Please enter a valid number of scores." << endl;
        return 1;
    }

    vector<int> scores(size);

    int sum = 0;

    for (int i = 0; i < size; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    double average = (double)sum / size;

    cout << fixed << setprecision(2);

    cout << "\nAverage score: " << average << endl;

    cout << "\nScores above average:" << endl;

    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {
            cout << scores[i] << endl;
        }
    }

    return 0;
}