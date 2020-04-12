//second largest
#include<stdio.h>
int main(){
long long int a,b,c;
int t;
scanf("%d",&t);
while(t--){
scanf("%lld %lld %lld",&a,&b,&c);

if(a>b && b>=c) printf("%lld\n",b);
else if(c>b && b>=a) printf("%lld\n",b);

else if(b>a && a>=c) printf("%lld\n",a);
else if(c>a && a>=b) printf("%lld\n",a);


else if(a>c && c>=b) printf("%lld\n",c);
else if(b>c && c>=a) printf("%lld\n",c);

else if(b==c && c==a) printf("%lld\n",c);

}

return 0;
}
