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
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The previous node cannot be NULL " << endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    prev_node->next = new_node->next;
    prev_node->next = new_node;
}
void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    Node *last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    push(&head, 8);
    push(&head, 5);
    append(&head, 9);
    insertAfter(head->next, 2);
    cout<<"List is "<<endl;
    display(head);
    return 0;
}
