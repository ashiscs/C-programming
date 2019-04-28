#include<stdio.h>
void main()
{

    int beg,end,n,a[10],i,mid,k,p,f=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&k);
    beg=0;
    end=n-1;
    while(beg<end)

    {
         mid=(beg+end)/2;
         if(a[mid]==k)
         {
            p=mid;
            f=1;
            printf("Found");
            break;
         }
         else if(a[mid]<k)
         {
             beg=mid+1;
         }
         else
         {
             end=mid-1;
         }
    }
    if(beg>=end && f==0)
    {
        printf("Not Found");
    }
}
