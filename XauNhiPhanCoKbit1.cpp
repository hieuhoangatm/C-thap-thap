#include<bits/stdc++.h>
using namespace std;

int n,k,ok,a[1005];

void ktao(){
	for(int i=1;i<=n;i++) a[i]=0;
}
int kt(string s){
	for(int i=0;i<n-2;i++){
		if((a[i]-'0') * (a[i+1]-'0') * (a[i+2]-'0') == 0) return 0;
	}
	return 1;
}
void next(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok =0;
	else a[i]=1;
}

bool check(){
	int res=0;
	for(int i=1;i<=n;i++){
		res+=a[i];
	}
	return res==k;
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n>>k;
		ktao();
		ok=1;
		while(ok){
			if(check()){
				string s="";
				for(int i=1;i<=n;i++){
					s=to_string(a[i])+s;
			    }
			    if(kt(s)) cout << s;
			    cout << endl;
		    }
		    next();
	    }
   }
}

