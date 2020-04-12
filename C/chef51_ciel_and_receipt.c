//ciel and receipt
#include<stdio.h>
int main(){
int p,t,i,dif,count,a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
scanf("%d",&t);
while(t--){
count=0;
scanf("%d",&p);
 
while(p>0){
dif=100000;
for(i=0;i<12;i++){
     if(p-a[i]<dif && p-a[i]>=0)dif=p-a[i];
    if(dif==0 || p-a[i]<0)break;
}
 
p=dif;
count++;
}
printf("%d\n",count);
 
}
return 0;
}