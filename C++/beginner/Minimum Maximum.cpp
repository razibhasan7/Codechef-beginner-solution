/***************************
Programmer: Aanisha Mishra
Adjacent pairs to be picked can always have the smallest number in the array. Since
largest among the numbers in pair, is removed, the smallest number will stay till
the last. Hence the cost of operations will be smallest number * (length of array -1 )
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,x;
	    cin>>n;
	    long int s = 100001;
	    for(int i=0; i<n; i++){
	        cin>>x;
	        if(x<s)s=x;
	    }
	    cout<<s*(n-1)<<endl;
	}
	return 0;
}
