#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char a[100],c[100];
int i,n,b=0;
printf("Enter any string");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{

    if(isupper(a[i]))
    {
        b++;
       c[i]=toupper(a[i]);
    }
}
printf("Total uppercase letters is %d \n",b);
printf("so the string is: ");
puts(c);



}
