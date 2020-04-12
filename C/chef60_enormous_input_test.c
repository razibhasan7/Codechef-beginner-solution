//enormous input test
#include<stdio.h>
#include<math.h>
int main(){
int n,k;
int t,count=0;
scanf("%d %d",&n,&k);
while(n--){
scanf("%d",&t);
if(!(t%k))count++;
}
printf("%d\n",count);
return 0;

}

