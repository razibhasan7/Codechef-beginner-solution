//version control system
#include <stdio.h>
int main()
{
    
    int t,n,m,k,i,num,d[101],both,neither;
    scanf("%d",&t);    
    while(t--){
        both=0;neither=0;
        for(i=1;i<101;i++)d[i]=0;       
        scanf("%d %d %d",&n,&m,&k);
        for(i=0;i<m;i++){
              scanf("%d",&num);
              d[num]++;
        }
        for(i=0;i<k;i++){
              scanf("%d",&num);
              d[num]++;
        }
        for(i=1;i<=n;i++)
        {
         if(d[i]==2)both++;
         else if(d[i]==0)neither++;
        }
        printf("%d %d\n",both, neither);
    }
     return 0;
}
