#include <iostream>
using namespace std;

struct Employee
{
    int id;

    union Salary
    {
        int monthly;
        float hourly;
    } pay;
};

int main()
{
    Employee e;

    cout << "Enter employee ID: ";
    cin >> e.id;

    cout << "Enter monthly salary: ";
    cin >> e.pay.monthly;

    cout << "Employee ID: " << e.id << endl;
    cout << "Monthly salary: " << e.pay.monthly << endl;

    return 0;
}
