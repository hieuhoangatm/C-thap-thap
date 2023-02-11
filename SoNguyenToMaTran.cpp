#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int check(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main() {
    int n; cin >> n;
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin >> a[i][j];
    }
    set<int> se;
    for(int i=1;i<=n;i++){
        if(check(a[i][i])) se.insert(a[i][i]);
    }
    int x=1;
    for(int i=n;i>=1;i--){
        if(check(a[i][x])) se.insert(a[i][x]);
        x++;
    }
    int dem=0;
    for(auto it:se){
    	//cout << it << " ";
        dem++;
    }
    cout << dem << endl;
    
}

