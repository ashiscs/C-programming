#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *right,*left;
};
node *newnode(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void oddnodes(node *root,bool isodd=true)
{
    if(root==NULL)
        return;
    if(isodd)
    {
        cout<<root->data<<" ";

    }
    oddnodes(root->left,!isodd);
    oddnodes(root->right,!isodd);
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(4);
    root->right->right=newnode(5);
    root->right->left->right=newnode(6);
    root->right->left->right->left=newnode(7);
    oddnodes(root);
    return 0;
}
