/***************************
Programmer: Aanisha Mishra
Simple conditional based question
***************************/
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float h,c,t;
        int x=0;
        cin>>h>>c>>t;
        if(h>50) x++;
        if(c<0.7) x++;
        if(t>5600) x++;
        switch(x)
        {
            case 0: cout<<5<<endl;break;
            case 1: cout<<6<<endl;break;
            case 3: cout<<10<<endl;break;
            case 2: if(h>50 && c<0.7) cout<<9<<endl;
                    else if(c<0.7 && t>5600) cout<<8<<endl;
                    else if(h>50 && t>5600) cout<<7<<endl;
        }
    }
    return 0;
}
