#include<stdio.h>
int main()
{
int a[10],i,n,c=0,r,b[10],j=0;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c=c*10+a[i];
}
int d=c+1;
for(i=d;i!=0;i=i/10)
{
r=i%10;
b[j++]=r;
}
int k;
for(k=j-1;k>=0;k--)
{
printf("%d ",b[k]);
}
}
