#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n], b[m];
		map<int, int > mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
	    }
		for(int i=0;i<m;i++) cin >> b[i];
		for(int i=0;i<m;i++){
			if(mp[b[i]]  != 0){
				for(int j=0;j<mp[b[i]];j++) cout << b[i] << " ";
			}
			mp.erase(b[i]);
		}
		for(auto it: mp){
			for(int i = 0;i < it.second;i++){
				cout << it.first <<" ";
			}
		}
		cout << endl;
	}
}
