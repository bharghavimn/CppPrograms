#include <iostream>
using namespace std;

enum Color {Red = 1, Green, Blue};

int main()
{
    Color c;
    int choice;

    cout << "1. Red  2. Green  3. Blue\n";
    cout << "Enter choice: ";
    cin >> choice;

    c = static_cast<Color>(choice);

    switch (c)
    {
        case Red:
            cout << "You selected Red";
            break;
        case Green:
            cout << "You selected Green";
            break;
        case Blue:
            cout << "You selected Blue";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
