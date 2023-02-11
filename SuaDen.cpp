#include<bits/stdc++.h>
using namespace std;

main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n];
	for(int i=1;i<=n;i++) a[i]=0;
	while(b--){
		int x; cin >> x;
		a[x]=1;
    }
//    int d=0;
//	for(int i=1;i<=n;i++){
//		if(a[i]==0) d++;
//	}
	int cnt=0;
	for(int i=1;i<=k;i++){
		if(a[i]==1) cnt++;
	}
	int ans=cnt;
	for(int i=k+1;i<=n;i++){
		cnt= cnt-a[i-k]+a[i];
		ans=min(ans,cnt);
	}
	cout << ans << endl;
}
