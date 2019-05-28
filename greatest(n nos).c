#include<stdio.h>
int gre(int a);
int gre(int a)
{
int b[10],i,l;
printf("Enter the elements");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
l=b[0];
for(i=1;i<a;i++)
{
if(l<b[i])
{
l=b[i];
}
}
return l;
}
void main()
{
int x,y;
printf("Enter the limit");
scanf("%d",&x);
y=gre(x);
printf("largest %d",y);
}
