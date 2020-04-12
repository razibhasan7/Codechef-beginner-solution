//cutting recipe
#include<stdio.h>
#include<math.h>
int gcd(int a, int b){

if(a%b==0)return b;
else return gcd(b,a%b);



}
int main(){
int i,j,t,n,div,a[1000000];
scanf("%d",&t);

while(t--){
div=1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(i==0);
else if(i==1)
     if(a[i-1]>a[i])
             div=gcd(a[i-1],a[i]);
     else
             div=gcd(a[i],a[i-1]);
else if(i>1)
     if(div>a[i])
             div=gcd(div,a[i]);
     else
             div=gcd(a[i],div);    

}
for(i=0;i<n;i++){

a[i]/=div;
printf("%d ",a[i]);
}
printf("\n");
}
return 0;

}

