#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		long long n,k; cin >>n>>k;
		int a[n];
		for(int &x:a) cin >> x;
		int l=0, r, ans=1e9;
		long long sum=0;
		for(r=0;r<n;r++){
			sum+=a[r];
			while(sum > k){
				ans = min(ans, r-l+1);
				sum-= a[l];
				l++;
			}
		}
		if(ans==1e9) cout << "-1\n";
		else cout << ans << endl;
	}
}
