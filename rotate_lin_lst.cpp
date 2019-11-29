#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void rotat(node **head_ref,int k)
{
    if(k==0)
        return;
    node* current = *head_ref;
    int c=1;
    while(c<k && current!=NULL)
    {
        current=current->next;
        c++;
    }
    if(current==NULL)
        return;
    node *kth=current;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=*head_ref;
    *head_ref=kth->next;
    kth->next=NULL;
}
void push(node** head_ref,int data)
{
    node *new_node=new node;
    new_node->data=data;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void prin(node *n)
{
    while(n != NULL)
    {
        cout<<n->data<<" -> ";
        n=n->next;
    }
}
int main()
{
    node *head=NULL;
    for(int i=60;i>0;i-=10)
    {
        push(&head,i);
    }
    cout<<"Given linked-list is\n";
    prin(head);
    rotat(&head,4);
    cout<<"\nRotated linked list is\n";
    prin(head);
    return 0;
}
