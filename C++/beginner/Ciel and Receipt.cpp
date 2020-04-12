/***************************
Programmer: Aanisha Mishra
To take minimum number of items, we will first try to buy the costliest item possible. So, taking log to base 2
of the total money Ciel has i.e. buy the costliest possible item, then the next possible costliest item and
so on till you use all your money. I have ternary operator here.
***************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,i=0;
        cin>>p;
        while(p!=0)
        {
            int y=log2(p);
            p=y<=11?p-pow(2,y):p-pow(2,11); //ternary operator
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}

