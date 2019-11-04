#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any number\n";
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
        else
            c=a/b;
            cout<<c;
    }
    catch(int x)
    {
        cout<<"exception caught\n";
        cout<<"zero division error";
    }
    return 0;



}
