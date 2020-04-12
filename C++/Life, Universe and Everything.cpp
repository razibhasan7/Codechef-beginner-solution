/***************************
Programmer: Aanisha Mishra
In simplified words, Brute-Force means the simple mathematical approach used to solve a question rather
than using some pre-defined algorithms.
We use an infinite loop here. Break the loop when encounter 42
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        cin>>x;
        if(x==42)
            break;
        else
            cout<<x<<endl;
    }
    return 0;
}

