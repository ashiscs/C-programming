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
void printnode(node *root)
{
    if(root!=NULL)
    {
        printnode(root->left);
        if(root->left!=NULL && root->right!=NULL)
        {
            cout<<root->data<<" ";

        }
        printnode(root->right);
    }
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(4);
    root->right->right=newnode(5);
    printnode(root);
    return 0;
}

