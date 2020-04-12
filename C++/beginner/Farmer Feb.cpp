/***************************
Programmer: Aanisha Mishra
This program is a brute force solution for the problem. The sum of x and y is calculated.
The consecutive number of the sum are then checked for primality. 
***************************/
#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,i=1,s,flag;
        scanf("%d%d",&x,&y);
        s=x+y;
        while(1)
        {
            s=s+1;
            i=2;
            flag=0;
            while(i<=(s/2))
            {
                if(s%i==0)
                {
                    flag=1;
                    break;
                }
                i++;
            }
            if(flag==0)
                break;
        }
        printf("%d\n",s-x-y);
    }
    return 0;
}
