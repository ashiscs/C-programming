#include<iostream>
using namespace std;
int main()
{
    int a,b=0;
    cout<<"enter any number\n";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }

    try{
        if(b==2)
        {
            throw a;
        }
        else{
            cout<<"not a prime number "<<a;
        }
    }
    catch(int x){
        cout<<"Hooray! Exception caught!!";
        cout<<"prime number exception "<<a;
    }
    return 0;

    }
