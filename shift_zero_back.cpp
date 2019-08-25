#include<iostream>
using namespace std;
void pushzeros(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[c++]=a[i];
        }
    }
    while(c<n)
    {
        a[c++]=0;
    }
}
int main()
{
    int a[5],i;
    cout<<"enter the elements of array\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    pushzeros(a,5);
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
