#include <iostream>
using namespace std;

int main()
{
    int num;
    int *ptr;
    int **pptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;
    pptr = &ptr;

    cout << "Value: " << num << endl;
    cout << "Using pointer: " << *ptr << endl;
    cout << "Using double pointer: " << **pptr << endl;

    return 0;
}
