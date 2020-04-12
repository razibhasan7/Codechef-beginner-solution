//good joke
#include <stdio.h>
int main()
{
    
    int t,n,i,x,ans=0;
 
    scanf("%d",&t);    
    
    while (t--){
          scanf("%d",&n);
          ans= 0;
          for(i=1; i<= n; i++ ){
                scanf("%d %d",&x,&x);
                ans^=i;
          }
          printf("%d\n", ans);
    }
}
