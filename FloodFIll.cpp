#include<bits/stdc++.h>
using namespace std;

int a[50][50];
int dem=0;
int dx[8]= {-1,-1,-1,0,0,1,1,1};
int dy[8]= {-1,0,1,-1,1,-1,0,1};
int n,m;

void nhap(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin >> a[i][j];
	}
}

void Try(int i, int j, int x){
	a[i][j]=1000;
	dem++;
	for(int k=0;k<8;k++){
		int i1= i+dx[k];
		int j1= j+ dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==x){
			Try(i1,j1,x);
		}
	}
}

int main(){
	nhap();
	map<int, vector<int> > mp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=1000){
				dem=0;
				int tmp=a[i][j];
				Try(i,j,tmp);
				mp[tmp].push_back(dem);	
			}
		}
	}
	for(auto it:mp){
		sort(it.second.begin(), it.second.end());
		cout << it.first << " : ";
		for(int x:it.second){
			cout << x << " ";
		}
		cout << endl;
	}
}
