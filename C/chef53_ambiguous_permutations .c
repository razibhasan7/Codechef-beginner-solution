//ambiguous permutations 
#include<stdio.h>
#include<math.h>

int main(){
int i,n,a[100010]={0},flag;
scanf("%d",&n);
while(n>0){
flag=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
      if(a[a[i]-1]==i+1)flag++;
      else break;
if(flag==n)
printf("ambiguous\n");
else
printf("not ambiguous\n");
scanf("%d",&n);
}
return 0;

}

