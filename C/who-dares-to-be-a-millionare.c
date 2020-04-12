#include <stdio.h>
int main(void) {
	int t,n,i,max,w[1001],count;
	char s1[1001],s2[1001];
	scanf("%d",&t);
	while(t--){
	    count=0;
	    scanf("%d",&n);
	    scanf("%s %s",s1,s2);
	    for(i=0;i<n;i++){
	        if(s1[i]==s2[i]){
	            count++;
	        }
	    }
	    
	    for(i=0;i<n+1;i++)
	    scanf("%d",&w[i]);
	    
	    if(count==0) // if no correct answers
	    max=w[0];
	    else if(count==n) //if all answers correct
	    max=w[n];
	    else{
	        max=w[0];
	        for(i=1;i<=count;i++){
	            if(max<w[i])max=w[i];
	        }
	    }
	    printf("%d\n",max);
	    
	    
	}
	return 0;
	
}
