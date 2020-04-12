//farmer and his plot
#include <stdio.h>
int main()
{
    
    int t,i,n,m,count,side;    
scanf("%d",&t);    
    
    while (t--){
        count=0;
        scanf("%d %d",&n,&m);
        if(m==n)count=1;
        else {
        for(i=1;i<=n;i++){
            if(m%i==0 and n%i==0)side=i;           
        }
        count+=n/i;
        count+=m/i;
        }
        printf("%d\n",count);
 }
return 0;

}
