#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >>k;
		int a[n];
		for(int &x :a) cin >> x;
		double s=0;
		for(int i=0;i<k;i++){
			s+=a[i];
		}
		int x;
		long long cnt=LONG_MIN;
		for(int i=k;i<n;i++){
			s= (s- a[i-k]) + a[i];
			if(s>cnt){
				cnt = s;
				x=i;
			}
	    }
	    //cout << "a[x]= " <<a[x] << endl;
		for(int i=x-k+1;i<=x;i++) cout << a[i] <<" ";
		cout << endl;
	}
}
