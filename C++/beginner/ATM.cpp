/***************************
Programmer: Aanisha Mishra
Case 1: Pooja has sufficient balance for withdrawal +charges
Case 2: Pooja has sufficient balance for withdrawal but not for charges.
Case 3: Pooja does not have sufficient balance.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,s;
    cin>>a>>b;
    s= a+0.50; //total amount that will be deducted from balance
    if(s>b)
        cout<<fixed << setprecision(2)<<b<<endl; //case 1 and 2 solved
    else
        cout<< fixed << setprecision(2) <<(b-s)<<endl; //case 3 solved
    return 0;
}

