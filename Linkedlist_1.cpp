#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // temp=head;
    // cout<<endl;
    //  while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
}
int main()
{
    // // statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;

    // Dynamically
    Node *n3 = new Node(10);
    // Node* head=n3;
    n2.next = n3;
    Node *n4 = new Node(20);
    n3->next = n4;
    display(head);
    display(head);
    return 0;
}