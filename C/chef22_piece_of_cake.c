//piece of cake
#include<stdio.h>
#include<conio.h>
int main(){

int t,i,j,n;
char a[26]={0},s[1000];
int sum=0;
scanf("%d",&t);
while(t--){
  sum=0;
scanf("%s",&s);
n=strlen(s);
for(i=0;i<26;i++)a[i]=0;
//printf("n:%d ",n);
for(i=0;i<n;i++)
    a[s[i]-97]++;

sum=n;
//printf("sum:%dsun",sum);
  //printf("%d %d %d ",a[0],a[1],a[2]);
 
for(i=0;i<26;i++){
  // printf("%d ",a[i]);
   if(sum-a[i]==a[i]){
      printf("YES\n");
      break;
      }            
 
}
  
if(i==26)printf("NO\n");

}
getch();
return 0;

}
