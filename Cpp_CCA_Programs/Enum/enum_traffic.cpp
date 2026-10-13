#include <iostream>
using namespace std;

enum Signal {Red = 1, Yellow, Green};

int main()
{
    int choice;

    cout << "1. Red\n2. Yellow\n3. Green\n";
    cout << "Enter signal: ";
    cin >> choice;

    if (choice < 1 || choice > 3)
    {
        cout << "Invalid signal";
        return 0;
    }

    Signal s = static_cast<Signal>(choice);

    switch (s)
    {
        case Red:
            cout << "STOP";
            break;
        case Yellow:
            cout << "WAIT";
            break;
        case Green:
            cout << "GO";
            break;
    }

    return 0;
}
