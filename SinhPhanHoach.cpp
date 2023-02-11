#include<bits/stdc++.h>
using namespace std;

int n, a[1005], ok,cnt;

void ktao(){
	cnt=1;
	a[1]=n;
}

void next(){
	int i=cnt;
	while(i>=1 && a[i]==1) i--;
	if(i==0) ok=0;
	else{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/a[i];
		int r=d%a[i];
		if(q!=0){
			for(int j=1;j<=q;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}
		if(r!=0){
			cnt++;
			a[cnt]=r;
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok=1;
		while(ok){
			for(int i=1;i<=cnt;i++) cout << a[i] << " ";
			next();
			cout << endl;
		}
	}
}
