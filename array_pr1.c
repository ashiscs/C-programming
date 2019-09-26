#include<stdio.h>
int main()
{
    int a[5],i,j,k,s=0;
    printf("Enter the value of k\n");
    scanf("%d",&k);
    printf("\nEnter the elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        s=a[i];

        for(j=i+1;j<5;j++)
        {

            s=s+a[j];
            if(s==k)
            {
                printf("Found,\nelements between position %d to %d\n",i,j);
            }

            //s=s+a[j];

        }
    }
}
