#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int sum=INT_MIN, cnt =INT_MIN;
		for(int i=0;i<n;i++){

			sum= max(a[i],sum+a[i]);
			cnt = max(cnt,sum);
			cout << sum << " " << cnt<< endl;
		}
		cout << cnt << endl;
	}
}
