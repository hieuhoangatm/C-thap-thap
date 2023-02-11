#include<bits/stdc++.h> 
using namespace std; 
const int nMax = 1e6 + 1; 
int a[nMax]; 
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        int n; cin>>n; 
        for(int i = 0; i < n; i++) cin>>a[i];  
        int k, x; cin>>k>>x; 
        int m = lower_bound(a, a+n, x) - a, l, r; 
        if(a[m] == x){
            l = m - 1; r = m + 1; 
        }
        else{ 
            r = m; l = m - 1; 
        } 
        for(int i = k / 2 -1 ; i >= 0; i--){ 
            cout<<a[l-i]<<' '; 
        }
        for(int i = 0; i < k/2; i++){ 
            cout<<a[r+i]<<' '; 
        } 
        cout<<endl; 
    } 
}
