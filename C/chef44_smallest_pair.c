//smallest pair
#include<stdio.h>
#include<math.h>

int main(){
int i,t,n,num,num1,num2;
scanf("%d",&t);

while(t--){
num1=0;num2=0;
scanf("%d %d",&n,&num);
num1=num;
scanf("%d",&num);
       num2=num;
      
   for(i=2;i<n;i++){
       scanf("%d",&num);
       if(num>=num1 && num>=num2)continue;
       else if(num<num1 && num>=num2)num1=num;
       else if(num<num2 && num>=num1)num2=num;
       else if(num<num1 && num<num2){
            if(num1>=num2)num1=num;
            else num2=num;
       }
    }
    printf("%d\n",num1+num2);
}
return 0;

}

