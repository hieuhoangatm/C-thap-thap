#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first < b. first;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int,int> mp;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			mp[x]++;
		}
		for(auto it : mp){
		    v.push_back({it.first, it.second});
		}
		sort(v.begin(),v.end(), cmp);
		for(auto it : v){
			for(int i=1;i<=it.second;i++){
				cout << it.first << " ";
			}
		}
		cout << endl;
	}
}
