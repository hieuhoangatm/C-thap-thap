#include<bits/stdc++.h>
using namespace std;
using ll =long long;
main(){
	int t; cin >> t;
	while(t--){
		int n,p; cin >> n >> p;
		int cnt=0, tmp=p;
		while(tmp<=n){
			cnt+= n/tmp;
			tmp*=p;
		}
		cout << cnt << endl;
    }
}
