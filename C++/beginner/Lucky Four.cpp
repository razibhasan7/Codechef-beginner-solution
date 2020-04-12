/***************************
Programmer: Aanisha Mishra
Accept each input as a string and then comparing it with '4' is an easy approach.
There are other ways as well to solve this problem, like, taking (mod)10 and then checking if its 4(int)
Instead of char array, I am using string data type, to make you comfortable with its operations
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
        int i,c=0;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='4')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

