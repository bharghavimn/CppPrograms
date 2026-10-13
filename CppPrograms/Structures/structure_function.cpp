#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

Rectangle inputRectangle()
{
    Rectangle r;

    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;

    return r;
}

void increaseLength(Rectangle &r)
{
    r.length = r.length + 5;
}

void display(Rectangle r)
{
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
    cout << "Area: " << r.length * r.breadth << endl;
}

int main()
{
    Rectangle r = inputRectangle();

    cout << "\nOriginal Rectangle\n";
    display(r);

    increaseLength(r);

    cout << "\nAfter Increasing Length\n";
    display(r);

    return 0;
}
