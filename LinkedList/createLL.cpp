#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{

    int arr[] = {2, 4, 6, 8};

    Node *Head;
    Head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    Node *temp;

    temp = Head;
    while (temp != NULL)
    {

        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}