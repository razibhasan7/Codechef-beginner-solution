/***************************
Programmer: Aanisha Mishra
All possible mappings of letter with type is given in the problem. Simple
switch-case is used to identify the description.
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
        char a;
        cin>>a;
        a=tolower(a);
        switch(a)
        {
            case 'b': cout<<"BattleShip";break;
            case 'c': cout<<"Cruiser";break;
            case 'd': cout<<"Destroyer";break;
            case 'f': cout<<"Frigate";break;
        }
        cout<<endl;
    }
    return 0;
}
