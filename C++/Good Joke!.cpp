/***************************
Programmer: Aanisha Mishra
The question demands a little attention at the output section, and the knowledge of the property
that XOR is commutative i.e. (A XOR B) XOR C == A XOR (B XOR C). The permutation with the shortest
path will have numbers from 1 to N. We need to find the XOR of all the numbers in the permutation
i.e. XOR of numbers from 1 to N.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i,ans=1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>x>>y;
        for(i=2;i<=n;i++)
            ans=ans^i;
        cout<<ans<<endl;
    }
    return 0;
}

