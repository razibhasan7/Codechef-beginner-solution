//maximun and minimum
#include <stdio.h>
int main()
{
    
    int t,i,a[50001];
    long long int n,min;    
scanf("%d",&t);    
    
    while (t--){
        
        scanf("%lld",&n);
        for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         if(i==0)min=a[i];    
         else if(min>a[i])min=a[i];
        }

        printf("%lld\n",min*(n-1));
 }
return 0;

}
