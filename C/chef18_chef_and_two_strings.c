//chef and two strings
#include <stdio.h>
#include <string.h>
int main()
{
    
    int min,max,sum,i,t,l,len;
char s1[101],s2[101];
 
    scanf("%d",&t);    
    while(t--){
        scanf("%s %s",s1,s2);
        len=strlen(s1);min=0;max=0;
        for(i=0;i<len;i++){
              if(s1[i]==s2[i] && s1[i]!='?');
              else if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?'){min++;max++;}
              else if(s1[i]==s2[i] && s1[i]=='?')max++;
              else if(s1[i]=='?')max++;
              else if(s2[i]=='?')max++;
        }
        printf("%d %d\n",min, max);
    }
     return 0;
}
