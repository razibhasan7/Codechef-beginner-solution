//tanu and head-bob
#include<stdio.h>
int main(){
      int t,n,i,flag;
      char c;
      scanf("%d",&t); 
      while(t--){
            flag=0;
            scanf("%d",&n);
            scanf("%c",&c);
            for(i=0;i<n;i++){
                 scanf("%c",&c);
                 if(c=='Y' && flag==0){
                      flag=1;
                      printf("NOT INDIAN\n"); 
                 }
                 else if(c=='I' && flag==0){
                      flag=1;
                      printf("INDIAN\n");
                 }                
            }
            if(!flag)
                printf("NOT SURE\n");
            

       }
return 0;
}
