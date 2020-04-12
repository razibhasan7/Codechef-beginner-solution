/***************************
Programmer: Aanisha Mishra
Answer is hidden in the question, the maximum length of RS will be when RS is the hypotenuse of the
right triangle. The minimum length of RS will be when LS will be the hypotenuse.
Hit your brain on this!!
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float b,ls;
        cin>>b>>ls;
        cout<<sqrt((ls*ls)-(b*b))<<" "<<sqrt((ls*ls)+(b*b))<<endl;
    }
    return 0;
}

