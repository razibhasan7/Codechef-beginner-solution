//three way communicatin
#include<stdio.h>
#include<math.h>

int main(){
int i,t,r,x1,y1,x2,y2,x3,y3;
scanf("%d",&t);
while(t--){
scanf("%d",&r);
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
if(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) > r && sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)) >r){
         printf("no\n");
}
else if(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) > r && sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))>r){
  printf("no\n");
}
else if(sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)) > r && sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))>r){
  printf("no\n");
}
else printf("yes\n");

}
return 0;

}

