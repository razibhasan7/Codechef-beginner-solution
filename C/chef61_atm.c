//atm
#include<stdio.h>
#include<math.h>
int main(){
int x;
float y;
scanf("%d %f",&x,&y);
if(x%5){printf("%.2f\n",y);return 0;}
else if(y-x-0.50 <0){printf("%.2f\n",y);return 0;}
else printf("%.2f\n",y-x-0.50);

return 0;

}

