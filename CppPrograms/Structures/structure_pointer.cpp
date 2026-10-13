#include <iostream>
using namespace std;

struct Student
{
    int roll;
    float marks;
};

int main()
{
    Student s;
    Student *ptr;

    cout << "Enter roll number and marks: ";
    cin >> s.roll >> s.marks;

    ptr = &s;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << ptr->roll << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}
