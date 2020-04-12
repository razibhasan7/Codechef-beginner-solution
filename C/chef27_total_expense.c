//total expense
#include<stdio.h>
int main(){
int t,q,p;
scanf("%d",&t);
while(t--){
   scanf("%d %d",&q,&p);
   if(q>1000)
       printf("%f\n",0.9*p*q);
   else  
       printf("%f\n",p*q);
   

}

}
