/***************************
Programmer: Aanisha Mishra
Lets take two variable maxd=0 i.e. maximum difference possible and mind=0 i.e. minimum difference possible.
Four case arise.
Case1 : s1[i]==s2[i] i.e. both are equal, hence will not be counted as different.
Case2 : s1[i]=? and s2[i]=some character i.e. I can replace ? with the same character as s2[i], then it will not be counted.
Or else I can replace ? with some character other than s2[i], then I will increment maxd i.e. maximizing difference.
Case3 : s1[i]=some character s2[i]=? this case is same as above where maxd is incremented
Case4 : s1[i]=? s2[i]=? If we replace ?s with different character, we will maximize difference i.e. maxd++
Case5 : s1[i]!=s2[i] this will be counted in both, maximum difference as well as minimum difference as no
character can be altered.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a1,a2;
        cin>>a1>>a2;
        int s=0,d=0,l=a1.length(),i;
        for(i=0;i<l;i++)
        {
            if(a1[i]=='?' || a2[i]=='?')
                d++;
            else if(a1[i]!=a2[i])
            {
                d++;
                s++;
            }
        }
        cout<<s<<" "<<d<<endl;
    }
    return 0;
}
