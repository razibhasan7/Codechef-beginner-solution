//count steps in matrix
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() { 
	int t,j,n,rc[250001][2],i,num,count;
	scanf("%d",&t);
	while(t--){count=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&num);
            rc[num][0]=i;
            rc[num][1]=j;
       }
       for(i=2;i<=n*n;i++){
              count+=abs(rc[i][0]-rc[i-1][0]);
              count+=abs(rc[i][1]-rc[i-1][1]);
       }
       printf("%d\n",count);
	}
	return 0 ;
}
 
