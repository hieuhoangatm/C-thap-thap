#include<bits/stdc++.h>
using namespace std;
// lower_bound(iter1,iter2,key) [iter1, iter2) : tra ve vi tri cua phan tu dau tien >=key
// neu tat ca phan tu trong mang deu nho hon key thi tra ve iter2
main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x:a) cin >> x;
	aotu it=lower_bound(a,a+n,x);
	cout << *it << endl;
}
