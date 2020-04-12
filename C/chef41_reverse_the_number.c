//reverse the number
#include<stdio.h>
#include<math.h>
int main(){
int t;
int n,rev,temp;

scanf("%d",&t);
while(t--){
scanf("%d",&n);
rev=0;
   
while(n>0){
    rev=rev*10 + n%10;
    n/=10;
}

printf("%d\n",rev);
}
return 0;

}

