/***************************
Programmer: Aanisha Mishra
Take the number as string input, reverse it and then compare it with original
string
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string r=s;
        reverse(s.begin(),s.end());
        if(r.compare(s)==0)
            cout<<"wins";
        else
            cout<<"losses";
        cout<<endl;
    }
    return 0;
}
