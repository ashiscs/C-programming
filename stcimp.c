#include<stdio.h>
int stack[100],x,choice,n,i,top;
void pop(void);
void push(void);
void display(void);
void main()
{
    top=-1;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("----------------------------------------\n");
    printf("1)Push\n 2)Pop\n 3)Display\n 4)Exit\n");
    do{
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4://printf("Exit Point\n");
            break;
            default:printf("Wrong choice!");

        }
    }
    while(choice!=4);
}
void push()
{
    if(top==n-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the value to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        printf("Removed Element is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}

