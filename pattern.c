#include<stdio.h>
#include<math.h>
void main()
{
    int a,r,b=0,i;
    printf("Enter any decimal number\n");
    scanf("%d",&a);
    int c=a;
    for(i=0;c!=0;i++)
    {
        r=c%2;
        b=b+r*pow(10,i);
        c=c/2;
    }
    printf("Binary equivalent %d",b);
}
