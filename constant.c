#include<stdio.h>
int loopy(int i);
void main()
{

    loopy(5);
}
int loopy(int i)
{
    if(i==0)
    {
        printf("%i",i);
    }
    else
    {

        loopy(i-1);
        printf("%d",i);
    }
}
