#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int x,y;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]) x=i;
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]) y=i;
		}
		cout << y+1 << " " << x+1;
		cout << endl;
	}
}
