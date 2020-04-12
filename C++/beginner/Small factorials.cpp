/***************************
Programmer: Aanisha Mishra
The challenge in this question is to save a very large number which may have more than 100 digits.
An array of size 200 is maintained. Each digit of the result of n*(n+1) is saved in the array, where
n is from 1 to the number given-1, i.e. result of n!
***************************/
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[200]={0},m=0,i=2,temp=0,j=1;
        scanf("%d",&n);
        a[0]=1;
        while(i<=n)
        {
            j=0;
            temp=0;
            while(j<=m || temp!=0)
            {
                temp=a[j]*i + temp;
                a[j]=temp%10;
                temp=temp/10;
                j++;
            }
            j--;
            if(j>m) m=j;
            i++;
        }
        while(m>=0)

        {
            printf("%d",a[m]);
            m--;
        }
        printf("\n");
    }
    return 0;
}
