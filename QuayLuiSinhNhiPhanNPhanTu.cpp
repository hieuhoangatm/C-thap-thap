#include<bits/stdc++.h>
using namespace std;

int n,x[100];

void inkq(){
	for(int i=1;i<=n;i++){
		cout << x[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			inkq();
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}
