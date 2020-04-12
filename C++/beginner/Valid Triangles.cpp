/***************************
Programmer: Aanisha Mishra
Check whether the sum of angles is equal to 180 and each angle is greater than 0
***************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y+z)==180 && x!=0 && y!=0 && z!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
