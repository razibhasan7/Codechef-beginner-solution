/***************************
Programmer: Aanisha Mishra
Calculate total cost. Check if quantity purchased was more than 1000, multiply
0.9 to the total expense (10% discount).
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
        float x,y,t;
        cin>>x>>y;
        t=x*y;
        if(x>=1000)
         printf("%.6f\n",t*0.9);
         else
         printf("%.6f\n",t);
    }
    return 0;
}
