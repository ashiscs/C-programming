#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{

    char a[50];
    int i,j;
    printf("Enter any string\n");
    gets(a);
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
            break;
    }
    if(i>=j)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("No");
    }
}
