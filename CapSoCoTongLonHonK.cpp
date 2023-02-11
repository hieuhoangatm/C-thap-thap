#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n,k; cin >> n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	ll dem=0;
	for(int i=0;i<n;i++){
		int x= k-a[i];
		auto it= upper_bound(a+i+1,a+n,x);
		dem+= a+n-it;
		
	}
	cout << dem << endl;
}
