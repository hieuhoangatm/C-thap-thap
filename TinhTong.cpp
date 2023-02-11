#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll calc(string tmp){
    if (tmp.size() >= 11) return 0;
    for (int i = 0; i < tmp.size(); i++){
        if (!isdigit(tmp[i])) return 0;
    }
    ll res = stoll(tmp);
    if (res > 2147483647) return 0;
    else return res;
}

main(){
	//ifstream Filein;
    freopen("DATA.in", "r", stdin);
	long long s=0;
	string tmp;
	while(cin>>tmp){
		s+=calc(tmp);
	}
	//Filein.close();
	cout << s << endl;
}
