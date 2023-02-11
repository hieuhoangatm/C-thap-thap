#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n>>m;
		int a[n],b[m];
		set<int> se;
		for(int &x:a){
			cin >>x;
			se.insert(x);
	    }
	    for(int &x:b){
	    	cin >> x;
	    	se.insert(x);
		}
		for(auto& x:se) cout << x << " ";
		cout << endl;
		set<int> s;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i]==b[j]) s.insert(a[i]);
			}
		}
		for(auto& x:s) cout << x << " ";
		cout << endl;
	}
}
