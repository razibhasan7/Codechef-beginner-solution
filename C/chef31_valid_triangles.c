//valid triangles
#include <stdio.h>
int main()
{
    
    int sum,i,a,t,invalid;
 
    scanf("%d",&t);    
    
    while (t--){
          sum=0;
          
          i=3;
          invalid=0;
          while(i--){
            scanf("%d",&a);    
          if(a>0){
               sum+=a;
          }
          else{
               invalid=1;
          }
          }
          if(sum==180 && invalid==0)
          printf("YES\n");
          else
          printf("NO\n");
     }


}
