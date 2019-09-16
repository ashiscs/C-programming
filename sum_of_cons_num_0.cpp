#include<iostream>
using namespace std;
void perform(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;

                }
            }
        }
    }
}
int main()
{

    int i,a[5];
    cout<<"Enter the elements of array\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    perform(a,5);
    return 0;
}

