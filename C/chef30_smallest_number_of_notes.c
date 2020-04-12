//smallest number of notes
#include<stdio.h>
int main(){
int rem,note,i,t,n,num,a[]={1,2,5,10,50,100};
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
num=0;
while(n>0){
rem=1000000;
for(i=0;i<6;i++){
if(n/a[i]<rem && n/a[i]!=0){rem=n/a[i];note=a[i];}
}
//printf("%d %d\n",n,rem);
num+=rem;
n=n%note;
//printf("%d %d\n",n,rem);

}
printf("%d\n",num);
}
return 0;
}
            
