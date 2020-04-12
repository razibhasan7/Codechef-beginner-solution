//snape and ladder
#include<stdio.h>
#include<math.h>

int main(){
int i,j,t,b,ls;
scanf("%d",&t);

while(t--){

scanf("%d %d",&b,&ls);

printf("%.4f %.4f\n",sqrt(ls*ls-b*b),sqrt(ls*ls + b*b));

}
return 0;

}

