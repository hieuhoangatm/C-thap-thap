#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n>>x;
        vector<int> v;
        int a[n];
        for(int &x: a){
        	cin >> x;
        	v.push_back(x);
		}
		for(int i=0;i<n;i++){
			if(x==v.at(i)) cout << i+1 << endl;
		}
   }
        
}
