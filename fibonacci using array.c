#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    printf("Resultant array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
