#include <iostream>
using namespace std;

struct Student
{
    int roll;
    float marks;
};

int main()
{
    Student s[5];
    int key, found = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll number and marks: ";
        cin >> s[i].roll >> s[i].marks;
    }

    cout << "Enter roll number to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (s[i].roll == key)
        {
            cout << "\nStudent Found\n";
            cout << "Roll Number: " << s[i].roll << endl;
            cout << "Marks: " << s[i].marks << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Student not found";
    }

    return 0;
}
