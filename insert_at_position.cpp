#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"


Node *insert()
{
    int newdata;
    cin>>newdata;
    Node *head=NULL;
    Node *tail=NULL;
    while(newdata!= -1)
    {
    	Node *newnode=new Node(newdata);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>newdata;
    }
    return head;
}
void insert_at(Node *head,int i,int newdata)
{
    Node *newnode=new Node(newdata);
    int count=0;
    Node *temp=head;
    while(count < i-1)
    {
        temp=temp->next;
        count++;
    }
    Node *a=temp->next;
    temp->next=newnode;
    newnode->next=a;

}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
}
int main()
{
    cout<<"Inset Linked-List";
    Node *head=insert();
    display(head);
    int i,data;
    cout<<endl;
    cin>>i>>data;
    insert_at(head,i,data);
    display(head);
    return 0;
}
