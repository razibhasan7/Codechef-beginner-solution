/***************************
Programmer: Aanisha Mishra
The input size is limited to 3 integers. It is stored in a vector and sorted. The second element is displayed.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long int> a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        cout<<a[1]<<endl;
    }
    return 0;
}
