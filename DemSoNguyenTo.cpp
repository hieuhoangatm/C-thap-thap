#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int const maxn=1e6;
int pri[maxn];

void sang(){
	for(int i=0;i<=maxn;i++){
		pri[i]=1;
	}
	pri[0]=pri[1]=0;
	for(int i=2;i<=sqrt(maxn);i++){
		if(pri[i]){
			for(int j=i*i;j<=maxn;j+=i){
				pri[j]=0;
			}
		}
	}
}

int F[maxn];

int main(){
	sang();
	int dem=0;
	F[0]=F[1]=0;
	for(int i=2;i<=maxn;i++){
		if(pri[i]){
			dem++;
		}
		F[i]=dem;
	}
	int t; cin >> t;
	while(t--){
		int l,r; cin >> l >> r;
		if(l==0) cout << F[r]<<endl;
		else cout << F[r]-F[l-1]<<endl;
	}
}
