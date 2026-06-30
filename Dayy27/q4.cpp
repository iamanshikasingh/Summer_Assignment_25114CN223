#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks1, marks2, marks3;
    int total;
    float percentage;
    char grade;
};

int main() {
    Student s;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Marks in Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks in Subject 3: ";
    cin >> s.marks3;

    // Calculate total and percentage
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3.0;

    // Assign grade
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display Marksheet
    cout << "\n===== Student Marksheet =====" << endl;
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Subject 1   : " << s.marks1 << endl;
    cout << "Subject 2   : " << s.marks2 << endl;
    cout << "Subject 3   : " << s.marks3 << endl;
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    return 0;
}