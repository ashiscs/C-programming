#include<stdio.h>
int main()
{
    short arr[3][2]={2,7,10,12,15,18};
    printf("%d %d",*(arr+1)[1],**(arr+2));
    return 0;
}
