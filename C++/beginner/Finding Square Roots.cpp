/***************************
Programmer: Aanisha Mishra
sqrt inbuilt function of C++ is used to find square root. This function returns a float type result. It is explicitly 
typcasted by appending (int) to sqrt function.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<(int)sqrt(a)<<endl;
    }
    return 0;
}
