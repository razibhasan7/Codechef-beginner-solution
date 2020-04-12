/***************************
Programmer: Aanisha Mishra
If the differnce is less than k, that means quantities can be equalled. Otherwise,
differnce-k is the lease differnce that can be created between number of apples
and oranges.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,o,k;
	    cin>>a>>o>>k;
	    if(abs(a-o) <= k){
	        cout<<0<<endl;
	    } else {
	        cout<<abs(a-o)-k<<endl;
	    }
	}
	return 0;
}
