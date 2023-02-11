#include<bits/stdc++.h>
using namespace std;

int kt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int kt2(int n){
	int s=0;
	int m=n;
	while(m>0){
		int i= m%10;
		s+=i;
		m/=10;
	}
	vector<int> v;
	int sum=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			v.push_back(i);
			n/=i;
		}
	}
	for(int i=0;i<v.size();i++){
		while(v[i]>0){
			int k= v[i]%10;
			sum+= k;
			v[i]/=10;
		}
	}
	if(sum==s) return 1;
	else return 0;
}


main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(!kt(n) && kt2(n)) cout << "YES\n";
		else cout << "NO\n";
		kt2(n);
	}
}
