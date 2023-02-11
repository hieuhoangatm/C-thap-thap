#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string id,ten,lop,ns;
	double gpa;
};
int cnt=0;
void nhap(SinhVien p[], int n){
	for(int i=0;i<n;i++){
		cnt++;
		string tmp= to_string(cnt);
		tmp=string(3-tmp.size(),'0')+tmp;
		p[i].id="B20DCCN"+tmp;
		cin.ignore();
		getline(cin,p[i].ten);
		cin >> p[i].lop >> p[i].ns >> p[i].gpa;
		if(p[i].ns[2]!='/') p[i].ns="0"+p[i].ns;
		if(p[i].ns[5] !='/') p[i].ns.insert(3,"0");
    }
}

void in(SinhVien p[], int n){
	for(int i=0;i<n;i++){
		cout << p[i].id << " "<<p[i].ten<<" "<<p[i].lop<<" "<<p[i].ns<<" "<<fixed<<setprecision(2)<<p[i].gpa<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
