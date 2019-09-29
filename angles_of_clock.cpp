#include<iostream>
#include<cmath>
using namespace std;

int calcangle(double h,double m)
{
     if(h<0||h>12||m<0||m>60)
        cout<<"Wrong Input";
     if(h==12)
        h=0;
     if(m==60)
        m=0;
     int hour_angle=0.5*(h*60+m);
     int min_angle=6*m;
     int angle=abs(hour_angle-min_angle);
    int result=min(360-angle,angle);
     return result;
}

int main()
{
    cout<<calcangle(9,60)<<endl;
    cout<<calcangle(3,30)<<endl;
    return 0;
}
