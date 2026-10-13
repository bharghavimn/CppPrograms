#include <iostream>
using namespace std;

int main()
{
    int a[100], n, key, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Element not found";

    return 0;
}
