#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n;i++){
			if(binary_search(a,a+n,x+a[i]))  ok=1;
		}
		if(ok) cout << "1\n";
		else cout << "-1\n";
	}
}
