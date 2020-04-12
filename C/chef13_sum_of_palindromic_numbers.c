//sum of palindromic numbers
#include <stdio.h>
int ispal(int n){
int temp,rev=0;
temp=n;
  while(n>0)
  {
     rev=rev*10+n%10;
     n/=10;
  }
 if(temp==rev)return 1;
else return 0; 
}
int main()
{
    
    int t,l,r,sum,i;
    scanf("%d",&t);    
    
    while (t--){
        sum=0;
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++){
             if(ispal(i))
                 sum+=i;
        }
        printf("%d\n",sum);
 }
return 0;

}
