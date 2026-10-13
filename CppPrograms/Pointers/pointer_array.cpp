#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int *ptr = a;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
        cin >> *(ptr + i);

    cout << "Array elements: ";

    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << " ";

    return 0;
}
