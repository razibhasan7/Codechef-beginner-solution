//grade the steel
#include <stdio.h>
int main()
{
    
    int t,h,ts;
float cc;
 
    scanf("%d",&t);    
    while(t--){
        hf=0;cf=0;tf=0;
        scanf("%d %f %d",&h,&cc,&ts);
        if(h>50)hf=1;
        if(cc<0.7)cf=1;
        if(ts>5600)tf=1;
        if(hf && cf && tf)printf("10\n");
        else if(hf && cf)printf("9\n");
        else if(cf && tf)printf("8\n");
        else if(hf && tf)printf("7\n");
        else if(hf || cf || tf)printf("6\n");
        else printf("5\n");
        
        
        
    }
     return 0;
}
