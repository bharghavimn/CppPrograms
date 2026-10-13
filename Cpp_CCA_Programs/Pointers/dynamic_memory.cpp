#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid size";
        return 0;
    }

    int *ptr = new int[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
        cin >> ptr[i];

    cout << "Elements: ";

    for (int i = 0; i < n; i++)
        cout << ptr[i] << " ";

    delete[] ptr;

    return 0;
}
