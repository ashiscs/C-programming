#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,n,m,p,r;
    printf("Enter rows and columns of matrix 1");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of matrix 2");
    scanf("%d %d",&p,&r);
    if(n==p)
    {
        printf("Enter elements of matrix 1");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements of matrix 2");
        for(i=0;i<p;i++)
        {
            for(j=0;j<r;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<r;j++)
            {
                c[i][j]=0;
                for(k=0;k<m;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        for(i=0;i<m;i++)
        {

            for(j=0;j<r;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }
}
