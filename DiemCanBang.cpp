#include<bits/stdc++.h>
using namespace std;

void check(int a[], int n){
	int s=0,l=0,ok=0;
	for(int i=0;i<n;i++){
		s+=a[i];
	}
	int r;
	for(int i=0;i<n;i++){
		r= s-l -a[i];
		if(l==r){
			cout << i+1 <<endl;
			ok=1;
			break;
	    }
		l+=a[i];
	}
	if(!ok) cout << "-1\n";
}
main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		check(a,n);
    }
}
