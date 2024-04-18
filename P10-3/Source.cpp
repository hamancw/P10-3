#include <iostream>
using namespace std;

int main() {
    const int MAX_STUDENTS = 20;
    int numStudents;

    cout << "Enter the number of students in the class (maximum = " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << "." << endl;
        return 1;
    }

    int scores[MAX_STUDENTS];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter score #" << (i + 1) << ": ";
        cin >> scores[i];
    }

    int highest = scores[0];
    int lowest = scores[0];
    double total = scores[0];
    for (int i = 1; i < numStudents; ++i) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
        total += scores[i];
    }

    double average = total / numStudents;

    cout << "high = " << highest << " ";
    cout << "low = " << lowest << " ";
    cout << "Class average: " << average << " ";
}
