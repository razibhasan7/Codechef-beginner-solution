/***************************
Programmer: Aanisha Mishra
For all values of k, find the maximum (no.of coins)%k value.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,maxm=0,i=1;
        cin>>n>>k;
        while(i<=k)
        {
            if((n%i)>maxm)
            {
                maxm=n%i;
            }
            i++;
        }
        cout<<maxm<<"\n";
    }
    return 0;
}
