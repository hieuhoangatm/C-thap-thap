#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	int ma;
	string ten,nhom;
	double giamua,giaban,loinhuan;
};
int cnt=0;
void nhap(MatHang &a){
	cnt++;
	a.ma=cnt;
	cin.ignore();
	getline(cin,a.ten);
	getline(cin,a.nhom);
	cin >> a.giamua >> a.giaban;
	a.loinhuan=-a.giamua+a.giaban;
}

bool cmp(MatHang a, MatHang b){
	return a.loinhuan > b.loinhuan;
}

void in(MatHang a){
	cout << a.ma <<" "<<a.ten<<" "<<a.nhom<<" "<< fixed<<setprecision(2)<<a.loinhuan<<endl;
}

main(){
	int n;  cin >> n;
	MatHang a[n];
	for(int i=0;i<n;i++) nhap(a[i]);
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) in(a[i]);
}

//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37

