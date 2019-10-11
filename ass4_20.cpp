#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j;
    cout<<"Enter the elements of array\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (i!=j && a[i]==a[j])
                break;
        }
        if(j==5)
            cout<<a[i]<<" ";
    }
    return 0;

}
