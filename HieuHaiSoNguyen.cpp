//#include<bits/stdc++.h>
//using namespace std;
//
//string check(string a, string b){
//	while(a.size() < b.size()){
//		a="0"+a;
//	}
//	while(a.size() > b.size()){
//		b="0"+b;
//	}
//	string res="";
//	int x=0;
//	for(int i=a.size()-1;i>=0;i--){
//		if((a[i]-'0') < b[i]-'0'){
//			int tmp;
//			if(i==a.size()-1)  tmp= (a[i]-'0')+10-(b[i]-'0');
//			a[i+1]=a[i]+'9';
//			res+=tmp+'0';
//			x++;
//			
//		}
//		else{
//			int tmp= (a[i]-'0')-(b[i]-'0');
//			if(x>0) tmp-=1;
//			res+=tmp+'0';
//			x=0;
//		}
//	}
//	return res;
//}
//
//string rever(string s){
//	int n=s.size();
//	for(int i=0;i<n/2;i++){
//		swap(s[i],s[n-i-1]);
//	}
//	return s;
//}
//main(){
//	int t; cin >> t;
//	cin.ignore();
//	while(t--){
//		string a,b;
//		cin >> a >> b;
//		cout << rever(check(a,b)) << endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;

string check(string a, string b){
	while(a.size()<b.size()) a="0"+a;
	while(a.size() > b.size()) b="0"+b;
	if(a<b) swap(a,b);
	int x=0;
	string res="";
	for(int i=a.size()-1;i>=0;i--){
		int tmp=(a[i]-'0')-(b[i]-'0')-x;
		if(tmp<0){
			res=char(tmp + 10 + '0') + res;
			x=1;
		}
		else{
			res=char(tmp+'0')+res;
			x=0;
		}
	}
	return res;
}

main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << check(a,b) << endl;
	}
}

