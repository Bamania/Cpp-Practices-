#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL; // head pointing to null

void Insert(int x, int pos)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;

    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    node *temp1 = head;
    for (int i = 1; i < pos - 1 && temp1 != NULL; i++)
    {
        temp1 = temp1->next; // find the n-1 node
    }

    if (temp1 == NULL)
    {
        cout << "Position is out of bounds" << endl;
        delete temp;
        return;
    }

    temp->next = temp1->next;
    temp1->next = temp;
}

void print()
{
    node *iter = head;
    while (iter != nullptr)
    {
        cout << "The value is " << iter->data << endl;
        iter = iter->next;
    }
}

int main()
{
    int n, x, pos;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data for node " << i + 1 << ": ";
        cin >> x;
        cout << "Enter the position for the node: ";
        cin >> pos;
        Insert(x, pos);
    }
    print();

    return 0;
}
