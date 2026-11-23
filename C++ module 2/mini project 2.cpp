#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    int id;
    string studentName;
    float score;

public:

    // Function to get student details
    void getDetails() {

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter marks: ";
        cin >> score;

        if (score < 0 || score > 100) {
            cout << "Invalid marks! Setting marks to 0." << endl;
            score = 0;
        }
    }

    // Function to display details
    void showDetails() {

        cout << "\nStudent ID: " << id << endl;
        cout << "Name: " << studentName << endl;
        cout << "Marks: " << score << endl;
    }

    // Function to check result
    void checkResult() {

        if (score >= 40) {
            cout << "Result: PASS" << endl;
        }
        else {
            cout << "Result: FAIL" << endl;
        }
    }
};

int main() {

    Student s[3];

    // Get details of 3 students
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        s[i].getDetails();
    }

    // Display student details and results
    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < 3; i++) {
        s[i].showDetails();
        s[i].checkResult();
    }

    return 0;
}