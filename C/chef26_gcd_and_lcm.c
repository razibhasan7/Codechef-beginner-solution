//gcd and lcm
#include<stdio.h>
int gcd(int a,int b){

if(a%b)
gcd(b,a%b);
else
return b; 
}
int main(){
      int t;
     int g,a,b;
      
      scanf("%d",&t); 
      while(t--){  
        scanf("%d %d",&a,&b);
        if(a>b)g=gcd(a,b); 
        else
        g=gcd(b,a);

        printf("%d %d\n",g,a*b/g);    
      }
return 0;
}
