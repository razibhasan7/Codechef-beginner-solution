/***************************
Programmer: Aanisha Mishra
A person will be Indian only his gestures include I. He will be non Indian if gestures include
Y. We are not sure when his gestures include only N.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i=0,n=0,ii=0,y=0;
        cin>>k;
        string a;
        cin>>a;
        for(i=0;i<k;i++)
        {
            switch(a[i])
            {
                case 'N':n++;break;
                case 'Y':y++;break;
                case 'I':ii++;break;
            }
        }
        if(y!=0)
            cout<<"NOT INDIAN\n";
        else if(ii!=0)
            cout<<"INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
    return 0;
}
