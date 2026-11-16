// Practical 01: C++ fundamentals - data types, constants, variables, operators, I/O
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    cout << "Name: Prasad Wakhare" << endl;

    const int SUBJECTS = 3;            // constant: number of subjects
    const double PASS_PERCENT = 40.0;  // constant: minimum passing percentage

    string studentName;                // string
    int rollNo;                        // int
    double m1, m2, m3;                 // double
    char grade;                        // char
    bool passed;                       // bool

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks in 3 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    // Arithmetic operators
    double total = m1 + m2 + m3;
    double percentage = total / SUBJECTS;
    int wholeTotal = static_cast<int>(total) % 100;   // modulus demo

    // Relational + logical operators
    bool allAboveZero = (m1 >= 0) && (m2 >= 0) && (m3 >= 0);
    bool allBelow100  = (m1 <= 100) && (m2 <= 100) && (m3 <= 100);
    bool validInput   = allAboveZero && allBelow100;
    passed = validInput && (percentage >= PASS_PERCENT);

    if (percentage >= 75) grade = 'A';
    else if (percentage >= 60) grade = 'B';
    else if (percentage >= PASS_PERCENT) grade = 'C';
    else grade = 'F';

    cout << fixed << setprecision(2);
    cout << "\n--- Result ---\n";
    cout << "Student     : " << studentName << " (Roll No. " << rollNo << ")\n";
    cout << "Total       : " << total << " / " << SUBJECTS * 100 << "\n";
    cout << "Percentage  : " << percentage << "%\n";
    cout << "Total % 100 : " << wholeTotal << "  (modulus demo)\n";
    cout << "Valid input : " << boolalpha << validInput << "\n";
    cout << "Grade       : " << grade << "\n";
    cout << "Status      : " << (passed ? "PASS" : "FAIL") << endl;
    return 0;
}
