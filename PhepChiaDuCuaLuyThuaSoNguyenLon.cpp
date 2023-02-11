#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll kt(string a, ll b){
	ll s=0;
	for(char x:a){
		s=s*10+x-'0';
		s%=b;
	}
	return s;
}

ll kt2(ll a, ll b, ll m){
	ll cnt=1;
	while(b){
		if(b%2==1){
			cnt=cnt*a;
			cnt%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return cnt;
}

main(){
	int t; cin >> t;
	while(t--){
		string a; ll b,m;
		cin  >> a >> b >> m;
		ll x= kt(a,m);
		cout << kt2(x,b,m) << endl;
	}
}
