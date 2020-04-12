/***************************
Programmer: Aanisha Mishra
A vector element for each file is created and initialized to 0. If it is tracked, the element value is incremented.
If it is tracked, again the element value is incremented. This implies file numbers with element value equal to 2,
are tracked and ignored, while those with value 0, are both untracked and uninitialized.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,i,x,uit=0,it=0;
        cin>>n>>m>>k;
        vector<int> a(n,0); //vector with n elements, all initialized to 0
        for(i=0;i<m;i++)
        {
            cin>>x;
            a[x-1]++;
        }
        for(i=0;i<k;i++)
        {
            cin>>x;
            a[x-1]++;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                uit++;
            else if(a[i]==2)
                it++;
        }
        cout<<it<<" "<<uit<<endl;
    }
    return 0;
}

