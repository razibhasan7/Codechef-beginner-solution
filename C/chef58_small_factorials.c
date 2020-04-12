//small factorials
#include<stdio.h>
int main(){
int i,n,j,t,count,flag,m,a[200]={0},temp=0,num;
scanf("%d",&t);
while(t--){
temp=0;
m=1;
scanf("%d",&n);
for(i=0;i<200;i++){
a[i]=0;

}
for(i=0;i<n;i++){
num=i+1;
if(i==0)temp=1;
else temp=0;
j=0;
while(j<=160){

a[j]=a[j]*num + temp;
temp=a[j]/10;
a[j]=a[j]%10;

j++;
}
//printf("temp:%d " ,j);

}
flag=0;count=0;
for(i=180;i>=0;i--){
if(a[i])flag=1;//for not printing leading 0s
if(flag){
printf("%d",a[i]);
}

}
printf("\n");
//printf("count:%d\n",count);

}

return 0;
}
