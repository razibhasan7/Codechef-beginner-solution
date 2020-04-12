/***************************
Programmer: Aanisha Mishra
For each round, the cummulative score is stored in A1 and A2. Lead points for each player is maintained in l1 and l2.
l1 and l2 are updated after each round depending on the changes made to A1 and A2.
***************************/
#include<stdio.h>
int main()
{
    int n,i1=1,i2=2;
    long int l1=0,l2=0,A1=0,A2=0;
    scanf("%d",&n);
    while(n--)
    {
        int a1,a2;
        scanf("%d %d",&a1,&a2);
        A1=A1+a1;
        A2=A2+a2;
        if(A1>A2 && l1<(A1-A2))
            l1=A1-A2;
        else if(A2>A1 && l2<(A2-A1))
            l2=A2-A1;
    }
    if(l1>l2)
        printf("%d %d",i1,l1);
    else
        printf("%d %d",i2,l2);
    return 0;
}
