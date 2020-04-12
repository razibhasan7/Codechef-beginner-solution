/***************************
Programmer: Aanisha Mishra
Traverse each string simultaneously. If a pair non-matching characters are detected,
check if atleast one of them is a wildcard '?'. If not, break from the loop.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i;
	    string x,y;
	    cin>>x>>y;
	    for(i=0;i<x.length();i++){
	        if(x[i]!=y[i]){
	            if(x[i]!='?' && y[i]!='?')
	                break;
	        }
	    }
	    if(i!=x.length()) cout<<"No\n";
	    else cout<<"Yes\n";
	}
	return 0;
}
