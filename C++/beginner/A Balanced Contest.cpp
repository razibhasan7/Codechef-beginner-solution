/***************************
Programmer: Aanisha Mishra
Simple check is implemented using if else statements
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d=0,e=0;
	    long int p,x;
	    cin>>n>>p;
	    long int difficult_p = floor(p/10);
	    long int easy_p = floor(p/2);
	    for(int i=0; i<n; i++){
	        cin>>x;
	        if(x <=difficult_p) d++;
	        else if(x>=easy_p) e++;
	    }
	    if(e==1 && d==2){
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
