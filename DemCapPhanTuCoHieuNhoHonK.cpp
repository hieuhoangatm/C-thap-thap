#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,k;cin >>n>>k ;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		long long res=0;
		int buoc=0;
		for(int i=0;i<n;i++){
			auto it = lower_bound(a+i+1,a+n, k+ a[i]);
			
			res += it - (a+i) -1;
			
		}
		cout << res << endl;
	}
}
