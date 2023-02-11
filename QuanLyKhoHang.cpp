#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	string ma,tenmh,hang,donvi;
	int gianhap, giaban;
};

string tach(string s){
	stringstream ss(s);
	string token;
	string res="";
	while(ss>>token){
		res+=toupper(token[0]);
	}
	return res;
}
bool sx(MatHang a, MatHang b){
	if(a.giaban-a.gianhap == b.giaban-b.gianhap) return a.ma < b.ma;
	else return a.giaban-a.gianhap > b.giaban-b.gianhap;
}
int main(){
	int n; cin >> n;
	MatHang x[n];
	map<string,int> mp;
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,x[i].tenmh);
		cin >> x[i].hang;
		cin >> x[i].donvi;
		cin>> x[i].gianhap >> x[i].giaban;
		x[i].ma = tach(x[i].tenmh);
		mp[x[i].ma]++;
		string tmp= to_string(mp[x[i].ma]);
		while(tmp.size()<4){
			tmp="0"+tmp;
		}
		x[i].ma += tmp;
	}
	sort(x,x+n,sx);
	for(int i=0;i<n;i++){
		cout << x[i].ma << " "<<x[i].tenmh<<" "<<x[i].hang<<" "<<x[i].donvi<<" "<<x[i].gianhap<<" "<<x[i].giaban<<endl;
	}
	
}
