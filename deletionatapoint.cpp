#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void deleteNode(Node** head_ref, int position)
{
    if (*head_ref == NULL)
        return;
    Node *temp = *head_ref;
    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
}
void deleteList(Node** head_ref)
{
    Node* current=*head_ref;
    Node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    *head_ref=NULL;
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    head = new Node();
        second = new Node();
            third = new Node();
                fourth = new Node();
                             head->data = 6;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;
    display(head);
    cout<<endl;
    deleteNode(&head,3);
    display(head);
    cout<<endl;
    cout<<"Deleting....."<<endl;
    deleteList(&head);
    cout<<"List is Deleted";
    display(head);
    return 0;
}
