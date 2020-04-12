/***************************
Programmer: Aanisha Mishra
Checking for Palindrome for strings is an easy task. In place of taking int from users we take strings as
reverse strings is an easy task using predefined function reverse() whose return type is void and takes in two
parameters, begin_iterator and the end_iterator. This function can also be used for vectors, arrays etc.
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

