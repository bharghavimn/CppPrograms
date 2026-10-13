#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;
};

struct Student
{
    int roll;
    Date dob;
};

int main()
{
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter date of birth (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Date of Birth: " << s.dob.day << "/"
         << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}
