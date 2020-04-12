/***************************
Programmer: Aanisha Mishra
Sum of n natural numbers is given by n(n+1)/2. In this solution, solve the equation,
x = n(n+1)/2, where x is number of gold coins owned by chef. Answer is the value
of greatest integer part of n.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int x = (sqrt(1+(8*n)) - 1)/2;
	    cout<<floor(x)<<endl;
	}
	return 0;
}
