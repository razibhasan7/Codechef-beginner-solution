/***************************
Programmer: Aanisha Mishra
The input is accepted as string. The character in the 0th index and input.size() - 1 (last) index is converted to int,
and the addition is displayed.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int o=a[0]-'0';
        int l=a[a.size()-1]-'0';
        cout<<o+l<<endl;
    }
    return 0;
}
