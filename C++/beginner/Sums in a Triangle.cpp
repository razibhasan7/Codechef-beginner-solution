/*
Here from the rightmost end of the triangle check whether, nth index element is
greater or (n-1)th index element. Whicheve ris greater add it to the last element
of just above row. Now check for greater value in (n-1) and (n-2) index element.
Which ever greater add it to the second last element row just above. And so on.
(0,0) index will have the highest sum value, in the end.
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,j=0,i=0,m=0;
        scanf("%ld",&n);
        long int a[n][n];
        while(i<n)
        {
            j=0;
            while(j<=m)
            {
                scanf("%ld",&a[i][j]);
                j++;
            }
            m++;
            i++;
        }
        i=n-2;
        while(i>=0)
        {
            j=i;
            while(j>=0)
            {
                if(a[i+1][j]>a[i+1][j+1])
                    a[i][j]+=a[i+1][j];
                else
                    a[i][j]+=a[i+1][j+1];
                j--;
            }
            i--;
        }
        printf("%ld\n",a[0][0]);
    }
    return 0;
}
