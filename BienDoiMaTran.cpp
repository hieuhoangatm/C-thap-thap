#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		int hang[n] ={0}, cot[n]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){	
				cin >> a[i][j];
				hang[i] += a[i][j];
				cot[j] += a[i][j];
			}
		}
		int final = max(*max_element(hang, hang +n), *max_element(cot, cot+n));
//		cout << "Tong hang lon nhat la: "<< *max_element(hang, hang +n) << endl;
//		cout << "Tong cot lon nhat la: " << *max_element(cot, cot+n) << endl;
		int ans = 0;
		int i = 0, j = 0;
		while(i < n && j < n){
//			cout << "hang[" << i << "] la: " << hang[i] << endl;
//			cout << "cot[" << j << "] la: " << cot[j] << endl;
			int r = min(final - hang[i], final - cot[j]);
			//cout << "gia tri cua r la : " << r << endl;
			a[i][j] += r;
			//cout << "a["<<i<<"]["<<j<<"] la: " << a[i][j]<<endl;
			hang[i] += r;
			//cout << "hang["<<i<<"] :"<<hang[i]<<endl;
			cot[j] += r;
			//cout << "cot[" << j <<"] la: " << cot[j] << endl;
			ans += r;
			//cout << "ans= " << ans << endl;
			if(hang[i] == final) ++i;
			if(cot[j] == final) ++j;
		}
		cout << ans << endl;
	}
	return 0;
}
