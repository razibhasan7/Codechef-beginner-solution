//brackets
#include <stdio.h>
#include <string.h>
int main()
{
    
    int t,i,len,max,balance=0;
char a[100001];
    scanf("%d",&t);    
    while(t--){
       max=0;balance=0;
       scanf("%s",a);
       len=strlen(a);
       for(i=0;i<len;i++){
           if(a[i]=='('){
               balance++;
           }
           if(a[i]==')'){
               balance--;
           }
           if(max<balance)max=balance;
                        
       }
       for(i=0;i<max;i++){
           printf("(");               
       }
       for(i=0;i<max;i++){
           printf(")");               
       }
       printf("\n");
    }
     return 0;
}
