
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    // ==========================================
    // VARIABLE DECLARATIONS
    // ==========================================

    string studentName;
    string course;

    int score1, score2, score3, score4;
    int totalScore;
    int highestScore;

    double average;
    double percentage;

    // ==========================================
    // CONSTANT DECLARATION
    // ==========================================

    const int MAX_SCORE = 100;
    const int TOTAL_TESTS = 4;
    const int MAXIMUM_POSSIBLE = MAX_SCORE * TOTAL_TESTS;

    // ==========================================
    // WELCOME BANNER
    // ==========================================

    cout << "========================================" << endl;
    cout << "       STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // ==========================================
    // STUDENT INFORMATION
    // ==========================================

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    // ==========================================
    // INPUT VALIDATION
    // ==========================================

    cout << "\nEnter score for Test 1: ";
    cin >> score1;

    while (cin.fail() || score1 < 0 || score1 > MAX_SCORE) {
        cout << "Invalid score! Enter a number between 0 and 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> score1;
    }

    cout << "Enter score for Test 2: ";
    cin >> score2;

    while (cin.fail() || score2 < 0 || score2 > MAX_SCORE) {
        cout << "Invalid score! Enter a number between 0 and 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> score2;
    }

    cout << "Enter score for Test 3: ";
    cin >> score3;

    while (cin.fail() || score3 < 0 || score3 > MAX_SCORE) {
        cout << "Invalid score! Enter a number between 0 and 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> score3;
    }

    cout << "Enter score for Test 4: ";
    cin >> score4;

    while (cin.fail() || score4 < 0 || score4 > MAX_SCORE) {
        cout << "Invalid score! Enter a number between 0 and 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> score4;
    }

    // ==========================================
    // CALCULATIONS
    // ==========================================

    // Calculate total
    totalScore = score1 + score2 + score3 + score4;

    // Calculate average
    average = totalScore / static_cast<double>(TOTAL_TESTS);

    // Calculate percentage
    percentage = (totalScore / static_cast<double>(MAXIMUM_POSSIBLE)) * 100;

    // ==========================================
    // CHALLENGE 2: GRADE CALCULATION
    // Grade is based on average score
    // ==========================================

    char grade;

    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 80) {
        grade = 'B';
    }
    else if (average >= 70) {
        grade = 'C';
    }
    else if (average >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // ==========================================
    // CHALLENGE 3: FIND HIGHEST SCORE
    // ==========================================

    highestScore = score1;

    if (score2 > highestScore) {
        highestScore = score2;
    }

    if (score3 > highestScore) {
        highestScore = score3;
    }

    if (score4 > highestScore) {
        highestScore = score4;
    }

    // ==========================================
    // DISPLAY REPORT CARD
    // ==========================================

    cout << endl;
    cout << "========================================" << endl;
    cout << "              REPORT CARD" << endl;
    cout << "========================================" << endl;

    cout << "Student: " << studentName << endl;
    cout << "Course: " << course << endl;

    cout << endl;

    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << "Test 4: " << score4 << "/" << MAX_SCORE << endl;

    cout << endl;

    cout << "Total: " << totalScore << "/" << MAXIMUM_POSSIBLE << endl;

    cout << fixed << setprecision(2);

    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Highest Score: " << highestScore << endl;
    cout << "Grade: " << grade << endl;

    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    }
    else {
        cout << "Result: FAIL" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}
