//the lead game
#include<stdio.h>
#include<math.h>
int main(){
int n;
int p1,p2,t1,t2,max1=0,max2=0;

scanf("%d",&n);
p1=0;p2=0;
while(n--){
scanf("%d %d",&t1,&t2);
   p1+=t1;p2+=t2;
if(p1>p2){if(max1<p1-p2)max1=p1-p2;}
else if(max2<(p2-p1))max2=p2-p1;
}
if(max1>max2)printf("1 %d",max1);
else printf("2 %d",max2);

return 0;

}

