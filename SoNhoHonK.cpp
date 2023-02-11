#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n],cnt=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]<=k) cnt++;
		}
		int dem=0;
		for(int i=0;i<cnt;i++){
			if(a[i]<=k) dem++;
		}
		int idx=dem;
		for(int i=cnt;i<n;i++){
			if(a[i-cnt] <=k) dem--;
			if(a[i] <=k) dem++;
			idx=max(idx,dem);
		}
		cout << cnt-idx << endl;				
	}
}
