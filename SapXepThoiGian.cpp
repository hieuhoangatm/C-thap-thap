#include<bits/stdc++.h>
using namespace std;

struct Time{
	int gio,phut,giay;
};

void nhap(Time &a){
	cin >> a.gio >>a.phut>> a.giay;
}
void in(Time a[],int n){
	for(int i=0;i<n;i++) cout << a[i].gio<<" "<<a[i].phut<<" "<< a[i].giay<<endl;
}
bool cmp(Time a, Time b){
	long long x= a.gio*60*60+a.phut*60+a.giay;
	long long y= b.gio*60*60+b.phut*60+b.giay;
	if(x!=y) return x<y;
}

main(){
	int n; cin >> n;
	struct Time ds[n];
	for(int i=0;i<n;i++) nhap(ds[i]);
	sort(ds,ds+n,cmp);
	in(ds,n);

}
