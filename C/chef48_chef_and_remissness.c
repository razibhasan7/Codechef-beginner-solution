//chef and remissness
#include<stdio.h>
#include<math.h>

int main(){
int a,t,b;
scanf("%d",&t);

while(t--){

scanf("%d %d",&a,&b);
if(a>b)printf("%d ",a);
else printf("%d ",b);
printf("%d\n",a+b);
}
return 0;

}

