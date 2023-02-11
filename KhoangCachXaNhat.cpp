#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n;cin >>n;
		int a[n];
		int s=0;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>=i+1;j--){
				if(a[i]<=a[j]){
					int x= j-i;
//					if(s<x) s=x;
//					break;
					s= max(s,x);
					break;
				}
			}
		}
		cout << s << endl;
	}
}
