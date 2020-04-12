/***************************
Programmer: Aanisha Mishra
Out of the four possible directions, the bot can be given only one directioon. A
directioon change is not permitted. Hence, if change is required, bot cannot reach home
hence will be sad. Direction is decided using coordinate geometry.
***************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int d1 = x2-x1;
	    int d2 = y2-y1;
	    if(d1!=0 && d2!=0){
	        cout<<"sad\n";
	        continue;
	    }
	    if(d1!=0){
	        if(d1>0) cout<<"right\n";
	        else cout<<"left\n";
	    } else {
	        if(d2>0) cout<<"up\n";
	        else cout<<"down\n";
	    }
	}
	return 0;
}
