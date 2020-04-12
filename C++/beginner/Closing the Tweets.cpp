/***************************
Programmer: Aanisha Mishra
Maintain an array of size n. Update values of ith position to 0 or 1 depending on
whether tweet is open or close. Maintain another variable 'count' to keep count of
open tweets.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector<int> a(n,0);
	int count=0;
	while(k--){
	    string s;
	    cin>>s;
	    if(s == "CLICK"){
	        int x;
	        cin>>x;
	        a[x-1] = !a[x-1];
	        if(a[x-1] == 0) count--;
	        else count++;
	    } else {
	        for(int i=0; i<n; i++){
	            a[i] = 0;
	        }
	        count = 0;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
