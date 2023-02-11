#include<bits/stdc++.h>
using namespace std;

string check(string a, string b){
	while(a.size() < b.size()){
		a="0"+a;
	}
	while(a.size() > b.size()){
		b="0"+b;
	}
	int c=0;
	string res="";
	for(int i= a.size()-1;i>=0;i--){
		int tmp=a[i]-'0'+b[i]-'0'+c;
		c=tmp/10;
		tmp%=10;
		res+=tmp+'0';
	}
	if(c>0) res+="1";
	return res;
}

string rever(string s){
	int n=s.size();
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-i-1]);
	}
	return s;
}
main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << rever(check(a,b)) << endl;
	}
}
