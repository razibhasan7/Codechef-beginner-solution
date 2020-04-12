#include <bits/stdc++.h>
using namespace std;
long long int factorialNumber(int n)
{
    long long int p=1;
    for(int i=2;i<=n;i++)
    {
        p*=i;
    }
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<factorialNumber(x)<<endl;
    }
    return 0;
}
