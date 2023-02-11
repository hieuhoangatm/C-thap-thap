#include<bits/stdc++.h>
using namespace std;

void next(string s){
	int i=s.length()-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i!=-1){
		s[i]='1';
		cout << "xau nhi phan cuoi";
	}
	cout << s << endl;
}

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		next(s);
	}
}
