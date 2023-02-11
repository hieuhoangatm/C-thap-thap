#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; //a[n+1];
		cin >> n;
		int a[n+1];
		for(int i=0;i<n;i++) a[i]=n-i;
		do{
			for(int i=0;i<n;i++) cout << a[i];
			cout << " ";
	    }while(prev_permutation(a,a+n));
	    cout << endl;
	}
}
