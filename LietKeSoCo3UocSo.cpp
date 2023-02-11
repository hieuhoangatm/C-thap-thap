#include<iostream>
#include<bits/stdc++.h>
using ll =long long;
using namespace std;
int kt(int n){
	if(n>2 && n%2==0 || n<2) return 0;
	for(int i=3;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll l,n; cin >>l>> n;
		ll dem=0;
		for(ll i=l;i<=sqrt(n);i++){
			if(kt(i)){
				dem++;
				//cout << i << endl;
			}
		}
		cout << dem<<endl;
	}
}

