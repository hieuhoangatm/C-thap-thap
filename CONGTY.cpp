#include<bits/stdc++.h>
using namespace std;

struct ThanhVien{
	string ma, chuvu,ten,ns;
	int luongcoban, phucap, thunhap, ngaycong;
	int luongcung, thuong;
};

bool cmp(ThanhVien a, ThanhVien b){
	if(a.thunhap!=b.thunhap) return a.thunhap > b.thunhap;
	else 
		return a.ma < b.ma;
	
}
int main(){
	int n; cin >> n;
	cin.ignore();
	ThanhVien x[n];
	for(int i=0;i<n;i++){
		cin >> x[i].ma;
		cin.ignore();
		getline(cin,x[i].ten);
		cin >> x[i].ns;
		cin >> x[i].ngaycong;
		cin >> x[i].luongcoban;
		
		x[i].luongcung = x[i].ngaycong*x[i].luongcoban;
		
		if(x[i].ngaycong>=27) x[i].thuong= 0.2*x[i].luongcung;
		else if(x[i].ngaycong>=25) x[i].thuong = 0.1*x[i].luongcung;
		else{
			x[i].thuong=0;
		}
		
		if(x[i].ma[0]=='N' && x[i].ma[1]=='V'){
			x[i].phucap = 200000;
			x[i].chuvu= "Nhan vien";
		}	
		else if(x[i].ma[0]=='G' && x[i].ma[1]=='D'){
			x[i].phucap = 2000000;
			x[i].chuvu= "Giam doc";
		}
		else if(x[i].ma[0]=='P' && x[i].ma[1]=='G' && x[i].ma[2]=='D'){
			x[i].phucap = 1000000;
			x[i].chuvu= "Pho giam doc";
		}
		else if(x[i].ma[0]=='T' && x[i].ma[1]=='P'){
			x[i].phucap = 500000;
			x[i].chuvu= "Truong phong";
		}
		
		x[i].thunhap= x[i].luongcung+ x[i].phucap+x[i].thuong;
		
		if(x[i].ns[2]!='/') x[i].ns = "0"+x[i].ns;
		if(x[i].ns[5] !='/') x[i].ns= x[i].ns.insert(3,"0");
		
	}
	
	sort(x,x+n,cmp);
	
	for(int i=0;i<n;i++){
		cout << x[i].ma << " "<< x[i].ten << " "<<x[i].chuvu<<" "<< x[i].ns << " "<< x[i].ngaycong<<" "<<x[i].luongcoban<<" "<<x[i].thunhap<<endl;
	}
	
}


