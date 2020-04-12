//cops and the thief devu
#include <stdio.h>
int main()
{
    
    int j,i,t,m,x,y,p[10],unsafe,safe[101]={1},range;    
scanf("%d",&t);    
    
    while (t--){
unsafe=0;
        for(i=1;i<=100;i++)safe[i]=1;
        scanf("%d %d %d",&m,&x,&y);
        for(i=0;i<m;i++){
            scanf("%d",&p[i]);
            safe[p[i]]=0;
            
        }
        range=x*y;
        for(i=0;i<m;i++){
              for(j=p[i];j<=p[i]+range&&j<=100;j++)
                 safe[j]=0;
              for(j=p[i];j>=p[i]-range&&j>=1;j--)
                 safe[j]=0;
                 
       }
           unsafe=0;
         for(i=1;i<=100;i++)if(safe[i]==0)unsafe++;
printf("%d\n",100-unsafe);


 }
return 0;
}
