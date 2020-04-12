#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a>b) cout<<">\n";
        else if(a==b) cout<<"=\n";
        else if(a<b) cout<<"<\n";
    }
    return 0;
}
