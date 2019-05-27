#include<stdio.h>
void main()
{

    int a[10][10],b[10][10],i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("Resultant\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

}
