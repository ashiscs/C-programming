#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *right,*left;
};
node *newnode(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->right=temp->left=NULL;
    return temp;
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Preorder traversal of a tree\n";
    preorder(root);

    cout<<"\nPostorder traversal of a tree\n";
    postorder(root);

    cout<<"\nInorder traversal of a tree\n";
    inorder(root);
    return 0;
}
