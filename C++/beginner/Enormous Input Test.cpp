/***************************
Programmer: Aanisha Mishra
The question increments a counter if a number t is divisible by k, i.e. it leaves 0 as remainder
***************************/
#include<stdio.h>
int main()
{
    long int n,k,c=0;
    scanf("%ld%ld",&n,&k);
    while(n--)
    {
        long int t;
        scanf("%ld",&t);
        if(t%k==0)
            c++;
    }
    printf("%ld",c);
    return 0;
}
