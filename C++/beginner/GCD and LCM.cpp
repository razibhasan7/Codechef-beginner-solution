/***************************
Programmer: Aanisha Mishra
Used in-built function __gcd to calculate gcd and then the formula lcm * gcd = a*b
to calculate lcm.
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
        int a,b;
        cin>>a>>b;
        int x= __gcd(a,b);
        cout<<x<<" "<<(a*b)/x<<endl;
    }
    return 0;
}
