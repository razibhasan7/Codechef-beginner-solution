/***************************
Programmer: Aanisha Mishra
You have two number given by guards
The minimum number of entries: maximum(A,B)
How: For minimum(A,B) entries, both were awake. And for maximum(A,B)-minimum(A,B) entries
one particular guard was asleep.
The maximum number of entries: A+B
How: For the whole time, atleast one guard was asleep. One counted A entries, other counted B entries.
That will give a total of A+B entries.
max() This function return you the maximum value of two numbers.
min() returns the minimum value of two.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<< max(a,b)<<" "<<a+b<<endl;
    }
    return 0;
}

