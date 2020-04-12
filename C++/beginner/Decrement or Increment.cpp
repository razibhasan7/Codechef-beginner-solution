/***************************
Programmer: Aanisha Mishra
If number is divisible by 4, increment it by 1, otherwise decrement it.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	if(t%4==0) cout<<(t+1)<<endl;
	else cout<<(t-1)<<endl;
	return 0;
}
