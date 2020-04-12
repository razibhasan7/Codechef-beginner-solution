//small factorial
#include<stdio.h>
long long int fact(long long int n){
     if(n==0 || n==1)return 1;
else return n*fact(n-1);

}
int main(){
long long int n;
int t;
scanf("%d",&t);
while(t--){
scanf("%lld",&n);
printf("%lld\n",fact(n));
}

return 0;
}
