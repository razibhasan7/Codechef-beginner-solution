//chef and dolls
#include <stdio.h>
#include <string.h>
int main()
{
    
    int t,n,num,left;
char a[100001];
    scanf("%d",&t);    
    while(t--){
               left=0;
       scanf("%d",&n);
       while(n--){
           scanf("%d",&num);
           left^=num;
       }
       printf("%d\n",left);
    }
     return 0;
}
