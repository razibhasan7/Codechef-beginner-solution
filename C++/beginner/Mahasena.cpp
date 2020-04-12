/***************************
Programmer: Aanisha Mishra
The number of lucky soldiers should be greater than number of unlucky soldiers.
If that is the case, the army is ready for battle.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,i,x,e=0,o=0;
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>x;
	    if(x%2==0) e++;
	    else o++;
	}
	if(e>o) cout<<"READY FOR BATTLE";
	else cout<<"NOT READY";
	return 0;
}
