/***************************
Programmer: Aanisha Mishra
Use the formula n*(n+1)/2 d times by keeping n updated.
***************************/
#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    return (x*(x+1))/2;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,n;
	    cin>>d>>n;
	    while(d--){
	        n = sum(n);
	    }
	    cout<<n<<endl;
	}
	return 0;
}
