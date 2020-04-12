//factorial
//to find the number of trailing 0s in the factorial of a number
#include<stdio.h>
#include<math.h>
int main(){
int t;
int n,num,count;

scanf("%d",&t);
while(t--){
scanf("%d",&n);
num=5;count=0;

while(n>=num){
    count+=n/num;    
    num*=5;
}
printf("%d\n",count);
}
return 0;

}

