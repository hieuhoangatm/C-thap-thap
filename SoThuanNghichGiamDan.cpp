#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s.size()==1) return false;
	for(int i=0;i<s.length()/2;i++){
		if(s[i]!=s[s.length()-1-i]) return false;
	}
	return true;
}

main(){
	auto cmp = [](const string a, const string b) -> bool{
        return a.size() != b.size() ? a.size() > b.size() : a > b;
    };
    map<string, int, decltype(cmp)> mp(cmp);
    string s;
    while (cin >> s){
        if (check(s))
        mp[s]++;  
    }
    for (auto &&i : mp) cout << i.first << " " << i.second << endl;
    
}
