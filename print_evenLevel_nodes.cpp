#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
node *newnode(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void evennodes(node *root,bool iseven=false)
{
    if(root==NULL)
        return;
    if(iseven)
    {
        cout<<root->data<<" ";
    }
    evennodes(root->left,!iseven);
    evennodes(root->right,!iseven);
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->left->right=newnode(5);
    evennodes(root);
    return 0;
}
