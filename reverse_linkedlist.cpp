#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *insert()
{
    int newdata;
    cin >> newdata;
    Node *head = NULL;
    Node *tail = NULL;
    while (newdata != -1)
    {
        Node *newnode = new Node(newdata);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> newdata;
    }
    return head;
}
Node *reverse(Node *head) 
{
    Node *curr = head;
    Node *temp = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = temp;
        temp = curr;
        curr = next;
    }
    return temp;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    cout << "Insert Elements, Insert -1 to Exit";
    cout << endl;
    Node *head = insert();
    display(head);
    cout << endl;
    cout << "Reversed Linked List";
    Node *curr = reverse(head);
    cout<<endl;
    display(curr);
    return 0;
}