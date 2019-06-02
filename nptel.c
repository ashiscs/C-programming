#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int num,i,a=1,b=1,c=1,d=1,e=1,f=1,g=1,h=1,j=1;
    scanf("%c",&s);
    num=strlen(s);
    for(i=0;i<num;i++)
    {
        if(s[i]==1)
        a++;
        if(s[i]==2)
        b++;
        if(s[i]==3)
        c++;
        if(s[i]==4)
        d++;
        if(s[i]==5)
        e++;
        if(s[i]==6)
        f++;
        if(s[i]==7)
        g++;
        if(s[i]==8)
        h++;
        if(s[i]==9)
        j++;
    }
    printf("%d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,j);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
