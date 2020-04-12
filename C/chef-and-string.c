//chef and string
#include<stdio.h>
#include<string.h>
int main(){
char s[1000001];
int min,ch[4]={0},len,i;
scanf("%s",s);
len=strlen(s);

for(i=0;i<len;i++){
  if(s[i]=='C')ch[0]++;
else if(s[i]=='H' && ch[1]<ch[0])ch[1]++;
else if(s[i]=='E' && ch[2]<ch[1])ch[2]++;
else if(s[i]=='F' && ch[3]<ch[2])ch[3]++;
}
min=ch[0];
for(i=0;i<4;i++){
if(min>ch[i])min=ch[i];

}
printf("%d\n",min);
return 0;

}
