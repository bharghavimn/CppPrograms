#include <iostream>
using namespace std;

int main()
{
    int num;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value: " << num << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
