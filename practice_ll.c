#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*first=NULL;
void create(int a[],int n)
{
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->link=NULL;
    last=first;
    for(int i=1;i<=n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->link=NULL;
        last->link=t;
        last=t;
    }
}
void display(struct node* p)
{
    while(p->link!=NULL)
    {
        printf("%d ",p->data);
        p=p->link;
    }
}
void count(struct node* p)
{
    int c=0;
    while(p->link!=NULL)
    {
        c++;
        p=p->link;
    }
    printf("\nTotal number of nodes %d",c);
}
void sum(struct node* p)
{
    int s=0;
    while(p->link!=NULL)
    {
        s=s+p->data;
        p=p->link;
    }
    printf("\nSum of linked list is %d\n",s);
    printf("Reverse order:");
}
void recur(struct node* p)
{
    if(p->link!=NULL)
    {
        recur(p->link);
        printf("%d ",p->data);
    }
}
int main()
{
    int a[5];
    printf("Enter the elements of array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,5);
    display(first);
    count(first);
    sum(first);
    recur(first);
    return 0;
}
