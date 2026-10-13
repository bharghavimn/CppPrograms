#include <iostream>
using namespace std;

enum Month
{
    January = 1, February, March, April,
    May, June, July, August,
    September, October, November, December
};

int main()
{
    int month, day;

    cout << "Enter your birth month (1-12): ";
    cin >> month;

    cout << "Enter your birth day: ";
    cin >> day;

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        cout << "Invalid birthday";
        return 0;
    }

    Month m = static_cast<Month>(month);

    cout << "Your birthday is on ";

    switch (m)
    {
        case January:   cout << "January"; break;
        case February:  cout << "February"; break;
        case March:     cout << "March"; break;
        case April:     cout << "April"; break;
        case May:       cout << "May"; break;
        case June:      cout << "June"; break;
        case July:      cout << "July"; break;
        case August:    cout << "August"; break;
        case September: cout << "September"; break;
        case October:   cout << "October"; break;
        case November:  cout << "November"; break;
        case December:  cout << "December"; break;
    }

    cout << " " << day;
    return 0;
}
