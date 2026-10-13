#include <iostream>
using namespace std;

union Number
{
    int value;
    float decimal;
};

int main()
{
    Number n;
    int choice;

    cout << "1. Integer\n2. Float\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter integer: ";
        cin >> n.value;
        cout << "Integer: " << n.value;
    }
    else if (choice == 2)
    {
        cout << "Enter float: ";
        cin >> n.decimal;
        cout << "Float: " << n.decimal;
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
