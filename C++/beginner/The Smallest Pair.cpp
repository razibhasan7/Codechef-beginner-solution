/***************************
Programmer: Aanisha Mishra
Sort the arrays in ascending order and add the first two numbers.
***************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[0]+a[1]<<"\n";
    }
    return 0;
}
