//first and last digit
#include<stdio.h>
#include<math.h>
int main(){
int t;
int n,num,sum,temp;

scanf("%d",&t);
while(t--){
scanf("%d",&n);
sum=0;temp=0;

    sum+=n%10;
while(n>0){
    temp=n%10;
    n/=10;
}
sum+=temp;

printf("%d\n",sum);
}
return 0;

}

