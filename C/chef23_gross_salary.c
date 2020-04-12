//gross salary
#include<stdio.h>
int main(){
      int t,s;
      scanf("%d",&t); 
      while(t--){
           scanf("%d",&s);
           if(s<1500)
           printf("%d\n",2*s);
           else
           printf("%f\n",500+98*s/100);      
       }
return 0;
}
