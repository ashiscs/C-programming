#include<stdio.h>
struct p
{

    int x;
    char y;
};
int main()
{
    struct p p1[]={1,90,62,33,3,34};
    struct p *ptr1=p1;
    int x=(sizeof(p1)/3);
    if(x==sizeof(int)+sizeof(char))
        printf("True");
    else
        printf("False");
    return 0;
}
