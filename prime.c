#include<stdio.h>
void main()
{
int n,i,b=0;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
b++;

}
}

if(b==2)
{
printf("prime number %d",n);

}
else
{

printf("Not a prime number %d",n);

}
}
