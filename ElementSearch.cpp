#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int GetNth(Node *head, int index)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return (current->data);
            count++;
            current = current->next;
    }
    assert(0);
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    int x = 6;
    push(&head, 6);
    push(&head, 9);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    display(head);
    cout << endl;
    cout << "Element at index 3 is " << endl;
    cout << GetNth(head, 3);
    return 0;
}
