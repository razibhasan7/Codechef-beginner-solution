/***************************
Programmer: Aanisha Mishra
Total house that can be cover in y minutes where in each min x houses will be covered, will be x*y.
The police can run x*y houses ahead his or x*y houses before his house. So let declare an array with 100 elements.
And assign value 1 to each element where a police can go. Let the police house no. be ch. Then he can cover
ch-(x*y) to ch+(x*y) . Here we need to check that ch-(x*y) should not go below 1. And ch-(x*y) should not exceed 100,
as there are houses from 1 to 100 only
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y,i,c=0,j,l,r;
        cin>>m>>x>>y;
        x=x*y;
        vector<int> h(101,0);
        for(i=0;i<m;i++)
        {
            int ch;
            cin>>ch;
            l=ch-x<0?0:ch-x;
            r=ch+x>100?100:ch+x;
            for(j=l;j<=r;j++)
                h[j]++;
        }
        for(i=1;i<=100;i++)
            if(h[i]==0)
                c++;
        cout<<c<<endl;
    }
    return 0;
}

