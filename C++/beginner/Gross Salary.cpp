/***************************
Programmer: Aanisha Mishra
Simple if else condition implementation
***************************/
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int s;
        cin>>s;
        float g;
        if(s<1500)
        {
            g=s+s;
        }
        else
            g=s+500+(0.98*s);
        cout<<g<<endl;
    }
    return 0;
}
