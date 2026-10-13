#include <iostream>
using namespace std;

int main()
{
    int a[10], n, choice, pos, item;

    cout << "Enter number of elements (max 9): ";
    cin >> n;

    if (n < 1 || n > 9)
    {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Display\n2. Insert\n3. Delete\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    else if (choice == 2)
    {
        if (n == 10)
        {
            cout << "Array is full";
            return 0;
        }

        cout << "Enter position (1 to " << n + 1 << "): ";
        cin >> pos;
        cout << "Enter element: ";
        cin >> item;

        if (pos < 1 || pos > n + 1)
        {
            cout << "Invalid position";
            return 0;
        }

        for (int i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = item;
        n++;

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    else if (choice == 3)
    {
        cout << "Enter position to delete (1 to " << n << "): ";
        cin >> pos;

        if (pos < 1 || pos > n)
        {
            cout << "Invalid position";
            return 0;
        }

        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
