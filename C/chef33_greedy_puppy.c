//greedy puppy
#include <stdio.h>
int main()
{
    
    int t,max,i,n,k;
    scanf("%d",&t);    
    
    while (t--){
    max=0;
    scanf("%d %d",&n,&k);          
    
          for(i=2;i<=k;i++){
              if(max<n%i)max=n%i;
          }    
    
    printf("%d\n",max);
 }
return 0;

}
