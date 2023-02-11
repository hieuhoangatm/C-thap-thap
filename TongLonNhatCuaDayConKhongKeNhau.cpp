#include<bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n], b[n];
		for(ll &x:a) cin >> x;
		b[0]=a[0];
		b[1] = max(b[0], a[1]);
		for(ll i=2;i<n;i++){
			b[i]=max(b[i-1], a[i] + b[i-2]);
		}
		cout << b[n-1] << endl;
	}
}
