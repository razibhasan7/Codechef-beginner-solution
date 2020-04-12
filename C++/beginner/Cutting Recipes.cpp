/***************************
Programmer: Aanisha Mishra
Find HCF of the ingredient quaities of one dish. Diviide the quantity with the HCF
and print the solution.
***************************/
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],minm=1001,i=0,c,j;
        while(i<n)
        {
            scanf("%d",&a[i]);
            if(a[i]<minm)
                minm=a[i];
            i++;
        }
        i=minm;
        while(i>0)
        {
            c=0;j=0;
            while(j<n)
            {
                if(a[j]%i==0)
                    c++;
                j++;
            }
            if(c==n) break;
            i--;
        }
        j=0;
        while(j<n)
        {
            a[j]=a[j]/i;
            j++;
        }
        i=0;
        while(i<n)
        {
            printf("%d ",a[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
