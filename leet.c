#include<stdio.h>
int main()
{

    int a[10],b[10];
    int n,m;
    int i,j,f=0;
    printf("Enter the value of n and m:");
    scanf("%d%d",&n,&m);
    printf("\nEnter the elements of array A\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array B\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]==a[i]){
                f++;
            }
        }

    }
    if(f==n){
    printf("Subset");}
    else{
        printf("not a subset");}
}
