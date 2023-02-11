#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
ll kt(ll x){
	int cnt=0;
	for(int i=0;i<s.length();i++){
		int dem=0;
		for(int j=i;j<s.length();j++){
			dem=dem*10+s[j]-'0';
			dem%=x;
			if(dem==0) cnt++;
		}
	}
	return cnt;
}

main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		cin >> s;
		cout << -kt(24) + kt(8)<< endl;
	}
}
