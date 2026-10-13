#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node n1, n2, n3;

    cout << "Enter three elements: ";
    cin >> n1.data >> n2.data >> n3.data;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = nullptr;

    Node *ptr = &n1;

    cout << "Linked List: ";

    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;

    return 0;
}
