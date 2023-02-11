#include<bits/stdc++.h>
using namespace std;

int check(int a[], int b[], int n){
	int x=0;
	for(int i=0;i<n;i++){
		int s1=0,s2=0;
		for(int j=i;j<n;j++){
			s1+=a[j];
			s2+=b[j];
			if(s1==s2){
				x=max(x,j-i+1);
			}
		}
	}
	return x;
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		//	cin >> b[i];
		}
		for(int i=0;i<n;i++) cin >> b[i];
		cout << check(a,b,n) << endl;
	}
}
