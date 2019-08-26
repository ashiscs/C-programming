#include<iostream>
#include<algorithm>
using namespace std;
int smallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[n-k];
}
int main()
{
    int arr[5],i,k;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;

    cout<<"RESULT IS:"<<smallest(arr,5,k);
}

