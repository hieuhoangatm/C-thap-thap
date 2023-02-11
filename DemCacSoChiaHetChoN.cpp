#include<bits/stdc++.h>
using namespace std;
using ll =long long;
//int n;
ll kt(char a[], int n){
	ll res=0;
	for(int i=0;i<strlen(a);i++){
		int cnt=0;
		for(int j=0;j<strlen(a);j++){
			cnt=cnt*10+a[j]-'0';
			cnt%=n;
			if(cnt==0) res++;
		}
	}
	return res;
}
int x, n;

main(){
	int t; cin >> t;
//	cin.ignore();
	while(t--){
	    cin >> x >> n;
	    char a[x];
		for(int i=0;i<x;i++) cin >> a[i];
		cout << "Do dai: "<<strlen(a) << endl;
		cout << kt(a,strlen(a)) << endl;
	}
	
}
