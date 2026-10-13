#include <iostream>
using namespace std;

union Value
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    Value v;

    v.number = 100;
    cout << "Integer value: " << v.number << endl;

    v.decimal = 12.5f;
    cout << "Float value: " << v.decimal << endl;

    v.letter = 'B';
    cout << "Character value: " << v.letter << endl;

    return 0;
}
