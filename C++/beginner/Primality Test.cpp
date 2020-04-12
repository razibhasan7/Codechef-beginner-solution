/***************************
Programmer: Aanisha Mishra
Check whether a number is prime or not. Simplest code for prime number check
***************************/
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
bool isPrime(int x)
{
    if(x==1) return false;
    if(x==2) return true;
    for(int i=2;i<(x/2);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPrime(n))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
