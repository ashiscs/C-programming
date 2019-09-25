#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],n,i,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("\nenter the value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int* left=(int*)malloc(sizeof(int)*n);
    int* right=(int*)malloc(sizeof(int)*n);

    int *prod=(int*)malloc(sizeof(int));
    left[0]=1;
    right[n-1]=1;

    for(i=1;i<n;i++)
    {
        left[i]=left[i-1]*a[i-1];
    }
    for(j=n-2;j>=0;j--)
    {
        right[j]=right[j+1]*a[j+1];
    }
    for(i=0;i<n;i++)
    {
        prod[i]=left[i]*right[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",prod[i]);
    }
    return 0;

}
