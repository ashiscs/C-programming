#include<stdio.h>
void main()
{

    int arr[4]={2,1,9,20};
    int a,b,c;
    a=++arr[1];
    b=arr[1]++;
    c=arr[a++];
    printf("%d %d %d",a,b,c);
}
