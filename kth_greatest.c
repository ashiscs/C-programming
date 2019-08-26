#include<stdio.h>
int greatest(int arr[],int n,int k);
int main()
{
    int arr[5],i,k;
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k\n");
    scanf("%d",&k);
    printf("RESULT IS: %d",greatest(arr,5,k));
}
int greatest(int arr[],int n,int k)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n-k];
}
