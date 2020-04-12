//chef and his sequence
#include<stdio.h>
int main(){
int i,t,n,f,a[100000],sub[100000];

int flag,d[1000001]={0};
scanf("%d",&t);
while(t--){
flag=0;
for(i=0;i<1000001;i++)d[i]=0;
    scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
d[a[i]]++;
}
    scanf("%d",&f);
for(i=0;i<f;i++){
scanf("%d",&sub[i]);
if(d[sub[i]]==0)flag=1;
}

if(!flag)
printf("Yes\n");
else
printf("No\n");

}
return 0;
}
            
