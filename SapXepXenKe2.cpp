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
		sort(b,b+n,greater<int>());
		if(n%2==0){
			for(int i=0;i<n/2;i++){
				cout << b[i] << " " << a[i] << " ";
			}
	    }
		else{
			for(int i=0;i<n/2;i++){
				cout << b[i] << " " << a[i] << " ";
			}
			cout << a[n/2];
		}
		cout << endl;
	}
}
