#include<stdio.h>
void intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else{
            printf("%d ",b[j]);
            i++;
            j++;
        }
    }
}
int main()
{
   int a[]={1,2,3,5,6};
   int b[]={2,3,5,7};
   int m=sizeof(a)/sizeof(a[0]);
   int n=sizeof(b)/sizeof(b[0]);
   intersection(a,b,m,n);

}
