//the block game
#include<stdio.h>
int main(){
      int t,n,rev,temp;
      scanf("%d",&t); 
      while(t--){
           scanf("%d",&n);
           rev=0;temp=n;
           while(n>0){
               rev=rev*10+n%10;
               n=n/10;
           }
           if(temp==rev)
              printf("wins\n");
           else
               printf("losses\n");
               
      }
return 0;
}
