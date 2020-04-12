/***************************
Programmer: Aanisha Mishra
distance between the three people will form a triangle whose sides be sqrt(d1), sqrt(d2), sqrt(d3). But finding square root
will render approximate float value, which will be difficult to compare with the required maximum distance.
So we take R=R*R and compare it with d1,d2,d3. In only two cases they will be able to communicate with each other.
Case1: when all distances are less than R.
Case2: when atleast two of them(d1, d2, d3) are less than R. So the third person can use the later's transceiver
to communicate.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t
    while(t--)
    {
        int r;
        cin>>r;
        r=r*r;
        int x1,x2,x3,y1,y2,y3,c=0,d1,d2,d3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        d1=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        d2=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
        d3=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
        if(d1<=r && d2<=r && d3<=r)
            c=3;
        else if((d1>r && d2<=r && d3<=r)||(d1<=r && d2>r && d3<=r)||(d1<=r && d2<=r && d3>r))
            c=3;
        if(c==3)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
