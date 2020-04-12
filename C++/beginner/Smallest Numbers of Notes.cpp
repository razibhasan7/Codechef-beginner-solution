/***************************
Programmer: Aanisha Mishra
To get the minimum number of notes, we make the maximum usage of the available denominations stating from the largest one.
So its like, we may the maximum use of 100 rupee note, then 50 and so on. For example 1234, here the maxmimum
number of 100 rupee note will be 1234/100 =12. So we are now left with 1234-(12*100)=34. 34/50=0 So lets move on to next
i.e.10. 34/10=3 So 3 notes of 10 rupees and so on.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,c=0,i=0,m;
        int a[]={100,50,10,5,2,1};
        cin>>n;
        while(n!=0)
        {
            m=n/a[i];
            c=c+m;
            n=n-(a[i]*m);
            i++;
        }
        cout<<c<<endl;
    }
    return 0;
}

