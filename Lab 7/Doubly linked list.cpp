#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};
int main()
{
    Node *head = NULL;
    Node *temp;
    Node *newNode;
    int n, value;
    cout << "How many nodes? ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        newNode = new Node;
        cout << "Enter value: ";
        cin >> value;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
    cout << "\nForward Traversal: ";
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        if(temp->next == NULL)
            break;
        temp = temp->next;
    }
    cout << "NULL";
    cout << "\nBackward Traversal: ";
    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL";
    return 0;
}
