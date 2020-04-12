//chef and the wildcard matching
#include <stdio.h>
#include <string.h>
int main()
{
    
    int flag,sum,i,t,l,len;
char s1[11],s2[11];
 
    scanf("%d",&t);    
    while(t--){
        scanf("%s %s",s1,s2);
        len=strlen(s1);flag=0;
        for(i=0;i<len;i++){
            if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?')
                      {flag=1;break;}
        }
        if(flag)
        printf("No\n");
        else
        printf("Yes\n");
    }
     return 0;
}
