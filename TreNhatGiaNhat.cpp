#include<bits/stdc++.h>
using namespace std;

struct People{
	string ten, ns;
};

void nhap(People &a){
	cin >> a.ten >> a.ns;
}

void in(People a){
	cout << a.ten << endl;
}

//bool cmp(People u, People b){
//	string p1=u.ns;
//	string p2=b.ns;
//	char x[8],y[8],dem1=0,dem2=0;
//	for(int i=u.ns.length()-1;i>=0;i--){
//		if(u.ns[i]!='/'){
//			x[dem1]=u.ns[i];
//			dem1++;
//		}
//	}
//	int m=atoi(x);
//	for(int i=b.ns.length()-1;i>=0;i--){
//		if(b.ns[i]!='/'){
//			y[dem1]=b.ns[i];
//			dem2++;
//		}
//	}
//	int n=atoi(y);
//	return m<n;
//}
bool cmp(People a, People b){
	string s = a.ns, t = b.ns;
	int n1 = (s[0] -'0') * 10 + (s[1] -'0'), t1 = (s[3] - '0')*10 + s[4] -'0', na1 = stoi(s.substr(6));
	int n2 = (t[0] -'0') * 10 + (t[1] -'0'), t2 = (t[3] - '0')*10 + t[4] -'0', na2 = stoi(t.substr(6));
	if(na1 != na2) return na1 < na2;
	if(t1 != t2) return t1 < t2;
	return n1 < n2;
}
void sapxep(People a[], int n){
	sort(a,a+n,cmp);
}

main(){
	int n; cin >> n;
	People ds[n];
	for(int i=0;i<n;i++) nhap(ds[i]);
	sapxep(ds,n);
	//in(ds[0]);
	in(ds[n-1]);
	in(ds[0]);
}
//5
//Nam 01/10/1991
//An 30/12/1990
//Binh 15/08/1993
//Tam 18/09/1990
//Truong 20/09/1990
