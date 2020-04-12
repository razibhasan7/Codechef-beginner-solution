//fit squares in triangle
#include<stdio.h>
int main(){
int t,i,b,num,result;
scanf("%d",&t);
while(t--){
    num=0;
    result=0;
    scanf("%d",&b);
    
         for(i=4;i<=b;i++){
             if(i%2==0){
                  num++; 
                  result+=num;
              }
         }
         
              printf("%d\n",result);


}


return 0;
}
