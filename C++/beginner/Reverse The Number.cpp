/***************************
Programmer: Aanisha Mishra
The remainder left when input is divided by 10 is displayed. Then the input is divided by 10.
The process repeated till the modified input changes to 0 after being divided by 10.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num=0;
        while(n!=0)
        {
            num*=10;
            num+=(n%10);
            n/=10;
        }
        cout<<num<<endl;
    }
    return 0;
}
