#include<bits/stdc++.h>
using namespace std;
using ll = long long;

main(){
	int t; cin >> t;
	while(t--){
		ll n1,n2,n3; cin >>n1>>n2>>n3;
		int a[n1], b[n2], c[n3];
		int ok=0;
	//	map<ll,int> mp;
	
		for(int i=0;i<n1;i++) cin >> a[i];
		for(int i=0;i<n2;i++) cin >> b[i];
		for(int i=0;i<n3;i++) cin >> c[i];
		ll x=0,y=0,z=0;
		while(x< n1 && y < n2 && z < n3){
			if(a[x] == b[y] && a[x]==c[z]){
				cout << a[x] << " ";
				ok=1;
				x++;
				y++;
				z++;
			}
			else if(a[x] < b[y] || a[x] < c[z]){
				x++;
			}
			else if(b[y] < a[x] || b[y] < c[z]){
				y++;
			}
			else{
				z++;
			}
		}
		if(!ok) cout << "-1";
		cout << endl;
   }
}
		
//1 2 3
//3 3 4 5
//3 3 4 4 6
		
		
		
		
		
