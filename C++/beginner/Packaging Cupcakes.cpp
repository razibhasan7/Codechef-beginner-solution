/***************************
Programmer: Aanisha Mishra
Chef will eat cupcake if they do not fill the package completely. So if the package size is s, we need to find the
number which divides s leaving the largest remainder. The largest remainder for s will be s-1. There are many ways
to achieve this. The easiest one will be, divide the available cupcakes into two and increase the size of one half
by adding a cupcake to it from the other half. If number of cake n is even. We will have two halves with n/2 cupcakes.
If one cake is moved to the other half, the new pile will be n/2+1 and n/2-1. Now if s=n/2+1, chef will have n/2 -1cakes to eat,
the maximum possible value.If n is odd, the two halves will be n/2 and n/2 +1. Now if s=n/2+1, chef will again
have the maximum possible left overs.
The maximum possible left overs will be when packaging size will be just greater than half of the number of cupcakes.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,i=2,r=0,r1,c;
        cin>>n;
        cout<<(n/2+1)<<endl;
    }
    return 0;
}

