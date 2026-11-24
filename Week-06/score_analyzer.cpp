#include <iostream>
#include <iomanip>
using namespace std;

// Calculate average
double calculateAverage(int scores[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    return (double)sum / size;
}

// Display scores above average
void displayAboveAverage(int scores[], int size, double average) {

    cout << "\nScores above average (" << average << "):" << endl;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {

            cout << "Score " << scores[i]
                 << " at position " << i + 1 << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "None" << endl;
    }
}

// Find highest score
void findHighest(int scores[], int size) {

    int highest = scores[0];
    int position = 0;

    for (int i = 1; i < size; i++) {

        if (scores[i] > highest) {
            highest = scores[i];
            position = i;
        }
    }

    cout << "\nHighest score: " << highest
         << " at position " << position + 1 << endl;
}

// Find lowest score
void findLowest(int scores[], int size) {

    int lowest = scores[0];
    int position = 0;

    for (int i = 1; i < size; i++) {

        if (scores[i] < lowest) {
            lowest = scores[i];
            position = i;
        }
    }

    cout << "Lowest score: " << lowest
         << " at position " << position + 1 << endl;
}

// Count scores above average
void countAboveAverage(int scores[], int size, double average) {

    int count = 0;

    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {
            count++;
        }
    }

    cout << "Number of scores above average: " << count << endl;
}

int main() {

    const int SIZE = 10;

    int scores[SIZE];

    cout << "Enter " << SIZE << " student scores:" << endl;

    for (int i = 0; i < SIZE; i++) {

        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    double average = calculateAverage(scores, SIZE);

    cout << "\n--- Results ---" << endl;

    cout << fixed << setprecision(2);

    cout << "Average score: " << average << endl;

    displayAboveAverage(scores, SIZE, average);

    findHighest(scores, SIZE);

    findLowest(scores, SIZE);

    countAboveAverage(scores, SIZE, average);

    return 0;
}