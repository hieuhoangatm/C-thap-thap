#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string ma,ten,gt,ns,dc,mt,hd;
};
int cnt=0;
void nhap(NhanVien &a){
	cnt++;
	string tmp=to_string(cnt);
	tmp=string(5-tmp.size(),'0')+tmp;
	a.ma=tmp;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.mt >> a.hd;
}

void inds(NhanVien a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].ma<<" "<< a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mt<<" "<<a[i].hd<<endl;
	}
}

bool cmp(NhanVien a, NhanVien b){
	string s1 = a.ns, s2 = b.ns;
	int ng1 = (s1[0] - '0') * 10 + s1[1] - '0', t1 = (s1[3] - '0') * 10 + s1[4] - '0', n1 = stoi(s1.substr(6));
	int ng2 = (s2[0] - '0') * 10 + s2[1] - '0', t2 = (s2[3] - '0') * 10 + s2[4] - '0', n2 = stoi(s2.substr(6));
	if(n1 != n2) return n1 < n2;
	if(ng1 != ng2) return ng1 < ng2;
	return t1 < t2;
}

bool sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(i = 0; i < N; i++) nhap(ds[i]);
	sapxep(ds, N);
	inds(ds, N);
    return 0;
}

//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
