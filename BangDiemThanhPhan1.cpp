#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma,ten,lop;
	double diem1,diem2,diem3;
};

void nhap(SinhVien &a){
	cin.ignore();
	cin >> a.ma;
	cin.ignore();
	getline(cin,a.ten);
	//cin.ignore();
	cin>>a.lop >> a.diem1>>a.diem2>>a.diem3;
}
int cnt=0;
void in_ds(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cnt++;
		cout <<cnt<<" "<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].diem1<<" "<<fixed<<setprecision(1)<<a[i].diem2<<" "<<fixed<<setprecision(1)<<a[i].diem3<<endl;	
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.diem1+a.diem2+a.diem3<b.diem1+b.diem2+b.diem3;
}
void sap_xep(SinhVien a[], int n){
	sort(a,a+n,cmp);
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    //struct SinhVien ds[n];
    for(int i = 0; i < n; i++){
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

//3
//B20DCCN999
//Nguyen Van An
//D20CQCN04-B
//10.0
//9.0
//8.0
//B20DCAT001
//Le Van Nam
//D20CQAT02-B
//6.0
//6.0
//4.0
//B20DCCN111
//Tran Hoa Binh
//D20CQCN04-B
//9.0
//5.0
//6.0
