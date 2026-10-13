#include <iostream>
using namespace std;

struct Student
{
    int roll;
    float marks;
    char grade;
};

union Data
{
    int roll;
    float marks;
    char grade;
};

int main()
{
    Student s;
    Data d;

    cout << "Size of structure: " << sizeof(s) << " bytes" << endl;
    cout << "Size of union: " << sizeof(d) << " bytes" << endl;

    return 0;
}
