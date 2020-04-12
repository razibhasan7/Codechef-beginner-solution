//cooking machine
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() { 
	int T;
	int a,b,c;c=0;
	scanf("%d",&T);
	while(T-->0)
{ c=0;
    scanf("%d%d",&a,&b);
    while(b%a!=0)
    {
        a=a/2;c++;
    }
     while(a!=b)
    {
        a=a*2;c++;
    }
    printf("%d\n",c);
	}
	return 0 ;
}
 
