/***************************
Programmer: Aanisha Mishra
Find the loss value with the variables price, discount and quantity. Then directly 
use the formula in the code.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    double l = 0;
	    while(n--){
	        double p,q,d;
	        cin>>p>>q>>d;
	        l+=(p*d*d*q/10000);
	    }
	    printf("%.7lf\n",l);
	}
	return 0;
}
