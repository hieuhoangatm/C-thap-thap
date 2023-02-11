#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; cin >> s;
    vector<int> v;
    string so="";
    vector<string> ve;
    int x;
    for(int i=0;i<=s.size();i++){
        if(isdigit(s[i]) ){
            //x= x*10+ s[i]-'0';
            so+=s[i];
        }else{	
            ve.push_back(so);
            so="";
 	    }        
    }
    //sort(v.begin(), v.end());
    for(int i=0;i<ve.size();i++) cout << atoi(ve[i]) << " ";
    //cout << v[v.size()-1] << endl;
    
}
