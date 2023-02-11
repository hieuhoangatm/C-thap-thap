#include <bits/stdc++.h> 
using namespace std; 
using ll = long long;

main(){
	int t; cin >> t; 
	while(t--){ 
		ll n; cin >> n; 
		ll a[n]; 
		multiset <ll> se; 
		for(ll i = 0; i < n; i++){ 
			cin >> a[i]; 
			se.insert(a[i]); 
		} 
		ll check = 0; 
		for(ll i = 0; i < n; i++){ 
			for(ll j = i + 1; j < n; j++){ 
				ll tmp = sqrt(a[i] * a[i] + a[j] *a[j]); 
				ll ok = a[i] * a[i] + a[j] *a[j]; 
				if(tmp * tmp == ok){
					//cout << tmp <<" "<<ok << endl;
					if(se.find(tmp) != se.end())  check = 1; 
				} 
			} 
		} 
		if(!check) cout << "NO";  
		else  cout <<"YES"; 
		cout << endl; 
	} 
}
