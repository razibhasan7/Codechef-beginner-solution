/***************************
Programmer: Aanisha Mishra
An array of maximum length possible (INT_MAX) is created and initialised to 0. As inputs are received,
that particular index in the array is incremented. Then print i+1 a[i] times to get a sorted array.
***************************/
#include<stdio.h>
#define MAX 1000001
int main()
{
    long int t,n,i=0,a[MAX]={0},b;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&b);
        a[b]++;
    }
    i=0;
    while(i<MAX)
    {
        while(a[i]>0)
        {
            printf("%ld\n",i);
            a[i]--;
        }
        i++;
    }
    return 0;
}
