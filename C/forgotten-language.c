//forgotten language
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main() { 
	int r,t,n,k,l,i,match,j;
    char dic[100][6],p[6],track[100];
	scanf("%d",&t);
	while(t--){
    scanf("%d %d",&n,&k);
        
        for(i=0;i<n;i++)
                        track[i]=1;
        for(i=0;i<n;i++)
            scanf("%s",dic[i]);
        while(k--){
            scanf("%d",&l);
            for(i=0;i<l;i++){
                scanf("%s",p);
                  for(r=0;r<n;r++)
                     if(track[r])
                        if(strcmp(dic[r],p)==0){track[r]=0;break;}
                
                }
                                
            }
                  for(r=0;r<n;r++)
                      if(track[r])
                            printf("NO ");
                       else 
                            printf("YES ");
                  printf("\n");
                      
                           
                                 
        }
                         
      
	return 0 ;
}
 
