#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll  kt(string a, ll b){
	ll s=0;
	for(char x:a){
		s=s*10+x-'0';
		s%=b;
	}
	return s;
}

main(){
	int t; cin >> t;
	while(t--){
		string a;
		ll b; cin >> a >> b;
		cout << kt(a,b) << endl;
	}
}
