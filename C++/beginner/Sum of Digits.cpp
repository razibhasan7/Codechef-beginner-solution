/***************************
Programmer: Aanisha Mishra
The remainder left when input is divided by 10, it added to a variable 'sum'. Then the input is divided by 10.
The process repeated till the modified input changes to 0 after being divided by 10.
***************************/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        while(n!=0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
