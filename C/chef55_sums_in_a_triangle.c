//sums in a triangle
#include<stdio.h>
int main(){
int i,j,t,n,max,a[100][100],sum[100][100]={0};
scanf("%d",&t);

while(t--){
scanf("%d",&n);
scanf("%d",&a[0][0]);
sum[0][0]=a[0][0];
max=a[0][0];

for(i=1;i<n;i++)
for(j=0;j<=i;j++)
{
 scanf("%d",&a[i][j]);
if(j==0)
sum[i][j]=sum[i-1][j]+a[i][j];


else if(i==j)
sum[i][j]=sum[i-1][j-1]+a[i][j];

else

if(sum[i-1][j]>sum[i-1][j-1])
sum[i][j]=sum[i-1][j]+a[i][j];
else
sum[i][j]=sum[i-1][j-1]+a[i][j];

if(max<sum[i][j])// we dont have to make this comparison for all the elemets we can instead check in last row only, the max element of sum array in the last row is the answer
max=sum[i][j];
}

printf("%d\n",max);
}

return 0;

}
