#include<bits/stdc++.h>

using namespace std;
using ll= long long;

//int  tn(string a){
//	for(int i=0;i<a.size();i++){
//		if(a[i]=='0') return 0;
//	}
//	for(int i=0;i<a.size()/2;i++){
//		//if(a[i]=='0') return 0;
//		if(a[i]!=a[a.size()-i-1] ) return 0; 
//	}
//	return 1; 
//}


int kt(int n){
	int s=0;
	while(n>0){
		int x=n%10;
		s+=x;
		n/=10;
	}
	
	return s;
	
}

main(){
	int cnt=0;
	int dem=0;
	for(int i=9999999;i>=1000000;i--){
		if(kt(i)==17){
			cnt++;
		}
	}
	cout << cnt << endl;
	

}
