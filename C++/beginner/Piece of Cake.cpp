/***************************
Programmer: Aanisha Mishra
The frequency of characters in the string are stored in an array of size 26. One
of the elements in the array must be equal to half of length, because we have to find
frequency(one character) == sum(frequency(remaining characters)). Note the singular and
plurals here.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int i,l=s.length();
	    vector<int> a(26,0);
	    for(i=0;i<l;i++){
	        a[s[i]-'a']++;
	    }
	    for(i=0;i<26;i++){
	        if((2*a[i])==l) break;
	    }
	    if(i!=26) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
