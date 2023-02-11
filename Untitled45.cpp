#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		int a[105];
		cin>>n>>k;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		sort(a,a+n);
		
		for (int i=0;i<n-1;i++){
			for ( int j=n-1;j>i;j--){
				if (abs(a[i]-a[j])<k){
					dem+=j-i;
					break;
				}
			}
		}
		cout<<dem<<endl;
	}
}
