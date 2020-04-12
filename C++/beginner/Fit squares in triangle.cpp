/***************************
Programmer: Aanisha Mishra
With base length x. We see that x>=4 to accommodate atleast one 2*2 square.
Through observation we see, x=4 => 1 square
x=5 => 1 square
x=6 => 1+2 squares
x=7 => 1+2 squares
x=8 => 1+2+3 squares
Next stack of block increases will have x+1 squares if current block has x squares.
No.of stacks will be (base-2)/2.
Points to ponder:isosceles triangle, 2*2 squares
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b;
        cin>>b;
        x=(b-2)/2;
        cout<<(x*(x+1))/2<<endl;
    }
    return 0;
}

